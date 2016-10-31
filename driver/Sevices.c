//==============================================================================
#include "ets_sys.h"
#include "osapi.h"
#include "os_type.h"
#include "user_interface.h"
#include "gpio.h"
#include "driver/uart.h"
#include "driver/DS18B20_PR.h"
#include "driver/Configs.h"
#include "driver/UDP_Source.h"
#include "driver/wifi.h"
#include "driver/gpio16.h"
#include "driver/services.h"
//==============================================================================

static volatile os_timer_t service_timer;
static void  service_timer_cb(os_event_t *events);
uint8_t factory_reset_pin = 3;
uint8	serviceMode = MODE_NORMAL;
int cntr = 5;

char tData[2][4] = {"+250", "+250"};

u_REMOTE_TEMP remoteTemp = {.head = BROADCAST_DATA,
                            .sData[0] = "0000",
							.sData[1] = "0000"};
//==============================================================================
s_DATE_TIME date_time = {.DATE.day   = 25,
                         .DATE.month = 1,
                         .DATE.year  = 2016,
                         .TIME.hour = 16,
                         .TIME.min = 24};
unsigned char daysInMonth[]  = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

//int  dayOfWeek;
//==============================================================================
int getDayOfWeek(void)
{
  int m, Y = date_time.DATE.year;
  if (date_time.DATE.month < 2) { Y = Y - 1; m = date_time.DATE.month + 13;}
  else                          {            m = date_time.DATE.month + 1;}

  int a = (date_time.DATE.day + (26*(m+1)/10) + Y + Y/4 + 6*Y/100 + Y/400) % 7;
  return a;
}
//==============================================================================
void ICACHE_FLASH_ATTR timeIncrement(void)
{
  date_time.TIME.sec++;
  if(date_time.TIME.sec >= 60)
  {
    date_time.TIME.sec = 0;
    date_time.TIME.min++;
    if(date_time.TIME.min >= 60)
    {
      date_time.TIME.min = 0;
      date_time.TIME.hour++;
      if(date_time.TIME.hour >= 24)
      {
        date_time.TIME.hour = 0;
        date_time.DATE.day++;
        if (date_time.DATE.day > daysInMonth[date_time.DATE.month])
        {
          date_time.DATE.day = 1;
          date_time.DATE.month ++;
          if(date_time.DATE.month >= 12)
          {
            date_time.DATE.month = 0;
            date_time.DATE.year++;
          }
        }
      }
    }
  }
        remoteTemp.timeData[0] = (uint8) date_time.TIME.sec;
  		remoteTemp.timeData[1] = (uint8) date_time.TIME.min;
  		remoteTemp.timeData[2] = (uint8) date_time.TIME.hour;
  		remoteTemp.timeData[3] = (uint8) date_time.DATE.day;
  		remoteTemp.timeData[4] = (uint8) date_time.DATE.month;
  		remoteTemp.timeData[5] = (uint8) (date_time.DATE.year - 2000);
}
//==============================================================================
void ICACHE_FLASH_ATTR timeUpdate(char *aPtr)
{
						  date_time.DATE.year  = aPtr[2] + 2000;
		                  date_time.DATE.month = aPtr[3] - 1;
		                  date_time.DATE.day   = aPtr[4];

		                  date_time.TIME.hour =  aPtr[5];
		                  date_time.TIME.min   = aPtr[6];
		                  date_time.TIME.sec   = aPtr[7];
}
//==============================================================================
void ICACHE_FLASH_ATTR service_timer_start (void)
{
	 //SELECT command timer
		os_timer_disarm(&service_timer);
		os_timer_setfn(&service_timer, (os_timer_func_t *) service_timer_cb, NULL);
		os_timer_arm(&service_timer, 1000, true);
}
//==============================================================================
void ICACHE_FLASH_ATTR service_timer_stop (void)
{
	 //SELECT command timer
		os_timer_disarm(&service_timer);
//		os_timer_setfn(&select_timer, (os_timer_func_t *) select_loop, NULL);
//		os_timer_arm(&select_timer, 500, true);
}
//======================= GPIO interrupt callback =======================================================
//extern uint8_t pin_num[GPIO_PIN_NUM];
int resetCntr = 0;
int8 scrOrientation = 0;
//=======================
void ICACHE_FLASH_ATTR button_intr_callback(unsigned pin, unsigned level)
{
#ifdef COLOR_LCD
	if(scrOrientation == 0) scrOrientation = 0xc0;
	else scrOrientation = 0;
	init_screen(scrOrientation);
	cntr = 5;
#endif
	//ets_uart_printf("RESET BUTTON PRESSED!!!\r\n");
	serviceMode = MODE_BTN_RESET;
		resetCntr = 0;
		service_timer_start();
}
//======================= GPIO init function ============================================================
void ICACHE_FLASH_ATTR button_init(void)
{
	GPIO_INT_TYPE gpio_type;
	gpio_type = GPIO_PIN_INTR_NEGEDGE;
	if (set_gpio_mode(factory_reset_pin, GPIO_FLOAT, GPIO_INT))
		if (gpio_intr_init(factory_reset_pin, gpio_type))  gpio_intr_attach(button_intr_callback);
}
//==============================================================================
void ICACHE_FLASH_ATTR getTemperature(void)
{
	int i,j,e;
	int ptr[2] = {0, 1};

	if (configs.hwSettings.sensor[0].mode != configs.hwSettings.sensor[1].mode) // senors are different
	{
		e = 1;
		if (configs.hwSettings.sensor[0].mode == SENSOR_MODE_REMOTE) // 0 - remote; 1 - local
		{
			ptr[0] = 1;
			ptr[1] = 0;
		}
	}
	else if (configs.hwSettings.sensor[0].mode == SENSOR_MODE_LOCAL && configs.hwSettings.sensor[1].mode == SENSOR_MODE_LOCAL) // senors are local
		e = DevicesCount;
	else e = 0; // senors are remote

	for(i = 0; i < e; i++)
	{
		ds18b20(i, tData[ptr[i]]);
		for(j = 0; j < 4; j++) remoteTemp.sData[ptr[i]][j] = tData[ptr[i]][j];
	}

	ds18b20_Convert();
}
//==============================================================================
static void ICACHE_FLASH_ATTR service_timer_cb(os_event_t *events) {


	switch (serviceMode)
	{
	    case MODE_REMOTE_CONTROL:
	    	resetCntr++;
	    	if (resetCntr > 5)
	    	{
	    		service_timer_stop();
	    		resetCntr = 0;
	    		serviceMode = MODE_NORMAL;
	    		channelFree = 1;
	    	}
	    	break;

		case MODE_BTN_RESET:
				if (gpio_read(factory_reset_pin) == 0)
				{
					resetCntr++;
					if (resetCntr >= 10)
					{
						os_printf("do reset \r\n");

						os_memset(configs.hwSettings.wifi.SSID, 0,sizeof(configs.hwSettings.wifi.SSID));
						os_sprintf(configs.hwSettings.wifi.SSID, "%s", "TERMO_WIFI");

						configs.hwSettings.wifi.mode = SOFTAP_MODE;
						configs.hwSettings.wifi.auth = AUTH_OPEN;
						saveConfigs();
						system_restart();					
					}
				} else {
					service_timer_stop();
					resetCntr = 0;
					serviceMode = MODE_NORMAL;
				}

				break;

		case MODE_SW_RESET:
			resetCntr++;
			if (resetCntr >= 3)
				system_restart();
			break;

		case MODE_FLASH_WRITE:
			resetCntr++;
			if (resetCntr > 0)
				system_restart();
			break;
	}

}
