//============================================================================================================================
#include "ets_sys.h"
#include "osapi.h"
#include "gpio.h"
#include "os_type.h"
#include "user_config.h"
#include "user_interface.h"
#include "driver/uart.h"
#include "driver/plot.h"
#include "driver/DS18B20_PR.h"
#include "driver/Configs.h"
#include "driver/UDP_Source.h"
#include "driver/gpio16.h"
#include "driver/services.h"
//============================================================================================================================
extern int ets_uart_printf(const char *fmt, ...);
int (*console_printf)(const char *fmt, ...) = ets_uart_printf;

#define GPIO_LED_PIN 0

#define LOOP_PERIOD		(1000) // in msec
#define user_procTaskPrio        0
#define user_procTaskQueueLen    1

static volatile os_timer_t loop_timer;
static void  loop(os_event_t *events);
uint8 swap = 0;
//int cntr = 5;

#define PLOT_INTERVAL   (3600)
uint8 timeTrue = 0;

//======================= Main code function ============================================================
void ICACHE_FLASH_ATTR loop(os_event_t *events)
{
	//ets_uart_printf("%d.%d.%d\r\n", date_time.DATE.day, date_time.DATE.month, date_time.DATE.year);

	if (flashWriteBit == 1) saveConfigs();

	//ets_uart_printf("wifi_station_get_connect_status(%d) \r\n", wifi_station_get_connect_status());
	//=========== get temperature ===================
	getTemperature();
    signed int a = (tData[0][3] - '0') + (tData[0][2] - '0') * 10	+ (tData[0][1] - '0') * 100;
	signed int b = (tData[1][3] - '0') + (tData[1][2] - '0') * 10	+ (tData[1][1] - '0') * 100;
	//=========== show temperature ===================
	showTemperature(swap, tData[swap]);
        swap ^= 1;
	//================================================
	if (cntr)
	{
		cntr--;

#ifdef COLOR_LCD
		if(cntr == 0) 			showGraphic(tBuffer[0], 160, 0x0000a0);
		else if (cntr == 1) 	showGraphic(tBuffer[1], 240, 0x5b5b00);
		else
#endif
			if(configs.hwSettings.deviceMode == DEVICE_MODE_MASTER)
		{
			uint16 t = getSetTemperature();
			gpio_write(1, cmpTemperature (t, a));
		}
	}
	else
	{
		cntr = PLOT_INTERVAL;
		os_printf("T1 = %s, T2 = \r\n", tData[0]);
		addValueToArray(tData[0], plotData[0], ROTATE);
		addValueToArray(tData[1], plotData[1], ROTATE);

		//===== graphic ========
#ifdef COLOR_LCD

		if (tData[0][0] == '-')
			a = a * (-1);
		if (tData[1][0] == '-')
			b = b * (-1);
		valueToPlotBuffer(a, tBuffer[0]);
		valueToPlotBuffer(b, tBuffer[1]);
#endif
	}
	//==========================================================================
	if(configs.hwSettings.deviceMode == DEVICE_MODE_MASTER)
	{
		if(!timeTrue) timeTrue = timeSync();
		timeIncrement();
		//===========================================
		uint16 t = getSetTemperature();
		gpio_write(1, cmpTemperature (t, a));

		//============= sendUDPbroadcast in DEVICE_MODE_MASTER =================
		if(configs.hwSettings.wifi.mode == STATION_MODE)
			if(wifi_station_get_connect_status() == STATION_GOT_IP)
				sendUDPbroadcast(remoteTemp.byte, (uint16)sizeof(remoteTemp));
		if(configs.hwSettings.wifi.mode == SOFTAP_MODE)
			if(wifi_softap_get_station_num() > 0)
				sendUDPbroadcast(remoteTemp.byte, (uint16)sizeof(remoteTemp));
		//===============================================
		addValueToArray(tData[0], plotData[0], NON_ROTATE);
		addValueToArray(tData[1], plotData[1], NON_ROTATE);
		//================================================

	}
	printTime();
}
//==============================================================================
void ICACHE_FLASH_ATTR setup(void)
{
#ifndef COLOR_LCD
	Lcd_Clear();
	LINES();
#endif

	set_gpio_mode(1,GPIO_PULLUP, GPIO_OUTPUT);
	button_init();
	
	UDP_Init_client();
	ds18b20_init();

	// Start loop timer
	os_timer_disarm(&loop_timer);
	os_timer_setfn(&loop_timer, (os_timer_func_t *) loop, NULL);
	os_timer_arm(&loop_timer, LOOP_PERIOD, true);

}
//========================== Init function  =============================================================
//
void ICACHE_FLASH_ATTR user_init(void)
{

	uart_init(BIT_RATE_115200, BIT_RATE_115200);
	os_delay_us(1000000);
	ets_uart_printf("System init...\r\n");

	//saveConfigs();
	readConfigs();

//	init_screen();
#ifdef COLOR_LCD
	init_screen(0x00);
#else
	init_screen();
#endif

	sntp_initialize();

	wifi_station_disconnect();
	wifi_station_set_auto_connect(0);
	//system_update_cpu_freq(160);

	if(configs.hwSettings.wifi.mode == SOFTAP_MODE) setup_wifi_ap_mode();
		else if(configs.hwSettings.wifi.mode == STATION_MODE) setup_wifi_st_mode();

	// Start setup timer
	os_timer_disarm(&loop_timer);
	os_timer_setfn(&loop_timer, (os_timer_func_t *) setup, NULL);
	os_timer_arm(&loop_timer, LOOP_PERIOD * 2, false);
}
/******************************************************************************
 * FunctionName : user_rf_cal_sector_set
 * Description  : SDK just reversed 4 sectors, used for rf init data and paramters.
 *                We add this function to force users to set rf cal sector, since
 *                we don't know which sector is free in user's application.
 *                sector map for last several sectors : ABBBCDDD
 *                A : rf cal
 *                B : at parameters
 *                C : rf init data
 *                D : sdk parameters
 * Parameters   : none
 * Returns      : rf cal sector
*******************************************************************************/
uint32 ICACHE_FLASH_ATTR user_rf_cal_sector_set(void)
{
    enum flash_size_map size_map = system_get_flash_size_map();
    uint32 rf_cal_sec = 0;

    switch (size_map) {
        case FLASH_SIZE_4M_MAP_256_256:
            rf_cal_sec = 128 - 8;
            break;

        case FLASH_SIZE_8M_MAP_512_512:
            rf_cal_sec = 256 - 5;
            break;

        case FLASH_SIZE_16M_MAP_512_512:
        case FLASH_SIZE_16M_MAP_1024_1024:
            rf_cal_sec = 512 - 5;
            break;

        case FLASH_SIZE_32M_MAP_512_512:
        case FLASH_SIZE_32M_MAP_1024_1024:
            rf_cal_sec = 1024 - 5;
            break;

        default:
            rf_cal_sec = 0;
            break;
    }

    return rf_cal_sec;
}

void ICACHE_FLASH_ATTR user_rf_pre_init(void)
{
}
