//=============================================================================
#include <ets_sys.h>
#include "osapi.h"
#include "c_types.h"
#include "gpio.h"
#include "os_type.h"
#include <mem.h>
#include "driver/wifi.h"
#include "user_config.h"
#include "user_interface.h"

#include "driver/N2730LCD.h"

#include "driver/lcd1100.h"

#include "driver/Configs.h"
#include "driver/services.h"
//==============================================================================
uint8 flashWriteBit;
const char   Days[7][3]    = {{"СБТ"},{"ВСК"},{"ПОН"},{"ВТО"},{"СРД"},{"ЧТВ"},{"ПТН"}};
//==============================================================================
void ICACHE_FLASH_ATTR init_screen(void)
{

#ifdef COLOR_LCD

	ets_uart_printf("configs.hwSettings.wifi.mode = %d\r\n", configs.hwSettings.wifi.mode);
	ets_uart_printf("configs.nastr.SSID = %s\r\n", configs.hwSettings.wifi.SSID);
	ets_uart_printf("configs.nastr.SSID_PASS = %s\r\n", configs.hwSettings.wifi.SSID_PASS);

	//=================== color ============
	LCD_wakeup();

	printString (10, 240, BLACK, WHITE, configs.hwSettings.wifi.SSID);
	printString (10, 256, BLACK, WHITE, configs.hwSettings.wifi.SSID_PASS);


	//====== Draw screen =======
	tft_fillRect(0, 0, 240, 40, 0x5f);
	tft_fillRect(0, 40, 240, 120, 0x1f);

	tft_fillRoundRect(10, 84, 105, 60, 20, BLUE);
	tft_fillRoundRect(15, 89, 95, 50, 15, 0x1f);
	tft_fillRoundRect(125, 84, 105, 60, 20, YELLOW);
	tft_fillRoundRect(130, 89, 95, 50, 15, 0x1f);

	if		(configs.hwSettings.sensor[0].mode == SENSOR_MODE_REMOTE) printStringS(50, 147, GREEN, 0x1f, "REMOTE");
	else if	(configs.hwSettings.sensor[0].mode == SENSOR_MODE_LOCAL)  printStringS(50, 147, GREEN, 0x1f, "LOCAL");

	if		(configs.hwSettings.sensor[1].mode == SENSOR_MODE_REMOTE) printStringS(165, 147, GREEN, 0x1f, "REMOTE");
	else if	(configs.hwSettings.sensor[1].mode == SENSOR_MODE_LOCAL)  printStringS(165, 147, GREEN, 0x1f, "LOCAL");


	if(configs.hwSettings.wifi.mode == SOFTAP_MODE)  print_icon(182, 8, BLUE|GREEN, 0x5f, 6);
	else if(configs.hwSettings.wifi.mode == STATION_MODE)  print_icon(182, 8, BLUE|GREEN, 0x5f, 7);

	if      (configs.hwSettings.deviceMode == DEVICE_MODE_MASTER) { tft_drawRoundRect(62, 8, 54, 24, 5, GREEN); print_icon(208, 8, BLUE, 0x5f, 2);}
		else if (configs.hwSettings.deviceMode == DEVICE_MODE_SLAVE)  print_icon(208, 8, BLUE, 0x5f, 3);

#else
	//=================== bw lcd ============
	Lcd_Init();
				Gotoxy(0,0);
				if(configs.hwSettings.wifi.mode == SOFTAP_MODE) print_string("Точка доступа");
				else if(configs.hwSettings.wifi.mode == STATION_MODE) print_string("Клиент");
				Gotoxy(0,1);
				print_string(configs.hwSettings.wifi.SSID);
				Gotoxy(0,2);
				print_string(configs.hwSettings.wifi.SSID_PASS);
				Gotoxy(0,3);
				if(configs.hwSettings.deviceMode == DEVICE_MODE_MASTER) print_string("Устр: Главный");
				else if(configs.hwSettings.deviceMode == DEVICE_MODE_SLAVE) print_string("Устр: Ведомый");

				Gotoxy(0,4);
				if(configs.hwSettings.sensor[0].mode == SENSOR_MODE_LOCAL) print_string("D1:LOCAL ");
				else if(configs.hwSettings.sensor[0].mode == SENSOR_MODE_REMOTE) print_string("D1:REMOTE ");
				Gotoxy(0,5);
				if(configs.hwSettings.sensor[1].mode == SENSOR_MODE_LOCAL) print_string("D2:LOCAL ");
				else if(configs.hwSettings.sensor[1].mode == SENSOR_MODE_REMOTE) print_string("D2:REMOTE ");

#endif
}
//==============================================================================
void ICACHE_FLASH_ATTR printTime(void)
{
#ifdef COLOR_LCD

	//=================== color ============
	int x = 12, y = 48;
	printDigitT_16x24(x, y, GREEN, 0x1f, date_time.TIME.hour/10); x += 16;
	printDigitT_16x24(x, y , GREEN, 0x1f,  date_time.TIME.hour%10);x += 16;
	printDigitT_16x24(x, y , GREEN, 0x1f,  10);x += 16;
	printDigitT_16x24(x, y , GREEN, 0x1f,  date_time.TIME.min/10);x += 16;
	printDigitT_16x24(x, y , GREEN, 0x1f,  date_time.TIME.min%10);x += 32;

	printDigitT_16x24(x, y , 0x7f7fff, 0x1f,  date_time.DATE.day/10);x += 16;
	printDigitT_16x24(x, y , 0x7f7fff, 0x1f,  date_time.DATE.day%10);x += 16;
	printDigitT_16x24(x, y , 0x7f7fff, 0x1f,  19);x += 16;
	printDigitT_16x24(x, y , 0x7f7fff, 0x1f,  (date_time.DATE.month+1)/10);x += 16;
	printDigitT_16x24(x, y , 0x7f7fff, 0x1f,  (date_time.DATE.month+1)%10);x += 20;


	switch(getDayOfWeek())
	{
		case 0: printDigitT_16x24(x, y , 0x7f7f00, 0x1f,  16);x += 16; printDigitT_16x24(x, y , 0x7f7f00, 0x1f,  18);x += 16; break;
		case 1: printDigitT_16x24(x, y , 0x7f7f00, 0x1f,  17);x += 16; printDigitT_16x24(x, y , 0x7f7f00, 0x1f,  16);x += 16; break;
		case 2: printDigitT_16x24(x, y , 0x7f7f00, 0x1f,  15);x += 16; printDigitT_16x24(x, y , 0x7f7f00, 0x1f,  12);x += 16; break;
		case 3: printDigitT_16x24(x, y , 0x7f7f00, 0x1f,  17);x += 16; printDigitT_16x24(x, y , 0x7f7f00, 0x1f,  11);x += 16; break;
		case 4: printDigitT_16x24(x, y , 0x7f7f00, 0x1f,  16);x += 16; printDigitT_16x24(x, y , 0x7f7f00, 0x1f,  13);x += 16; break;
		case 5: printDigitT_16x24(x, y , 0x7f7f00, 0x1f,  14);x += 16; printDigitT_16x24(x, y , 0x7f7f00, 0x1f,  11);x += 16; break;
		case 6: printDigitT_16x24(x, y , 0x7f7f00, 0x1f,  15);x += 16; printDigitT_16x24(x, y , 0x7f7f00, 0x1f,  11);x += 16; break;
	}

#else
	//=================== bw lcd ============
	char_10x16(8 , 0 , date_time.TIME.hour/10);
	  char_10x16(18, 0 , date_time.TIME.hour%10);
	  char_10x16(28, 0 , 10);
	  char_10x16(34, 0 , date_time.TIME.min/10);
	  char_10x16(44, 0 , date_time.TIME.min%10);

	  int i;
	    Gotoxy(60,0);
	    print_char(date_time.DATE.day/10 + 0x30);
	    print_char(date_time.DATE.day%10 + 0x30);
	    print_char('.');
	    print_char((date_time.DATE.month+1)/10 + 0x30);
	    print_char((date_time.DATE.month+1)%10 + 0x30);

	    int m, Y = date_time.DATE.year;
	    if (date_time.DATE.month < 2) { Y = Y - 1; m = date_time.DATE.month + 13;}
	    else                          {            m = date_time.DATE.month + 1;}

	    int dayOfWeek = getDayOfWeek();

	    Gotoxy(60, 1);
	    print_char('-');
	    for (i = 0; i < 3; i++) print_char(Days[dayOfWeek][i]);
	    print_char('-');
#endif
}
//=============================================================================
u_CONFIG configs = {
		.cfg[0].periodsCnt = 1,
		.cfg[0].pConfig[0].hStart = 0,
		.cfg[0].pConfig[0].mStart = 0,
		.cfg[0].pConfig[0].temperature = 250,

		.cfg[1].periodsCnt = 1,
		.cfg[1].pConfig[0].hStart = 0,
		.cfg[1].pConfig[0].mStart = 0,
		.cfg[1].pConfig[0].temperature = 230,

	    .hwSettings.wifi.mode = STATION_MODE,
		.hwSettings.wifi.SSID = "voodoo",
        .hwSettings.wifi.SSID_PASS = "eminem82"};
//=============================================================================
void ICACHE_FLASH_ATTR saveConfigs(void) {
    flashWriteBit = 0;
	int result = -1;
	os_delay_us(100000);
	result = spi_flash_erase_sector(PRIV_PARAM_START_SEC + PRIV_PARAM_SAVE);
	result = -1;
	os_delay_us(100000);
	result = spi_flash_write(
			(PRIV_PARAM_START_SEC + PRIV_PARAM_SAVE) * SPI_FLASH_SEC_SIZE,
			(uint32 *) &configs, sizeof(u_CONFIG));

	ets_uart_printf("Write W = %d\r\n", result);
}

//=============================================================================
void ICACHE_FLASH_ATTR readConfigs(void) {
	int result = -1;
	result = spi_flash_read(
			(PRIV_PARAM_START_SEC + PRIV_PARAM_SAVE) * SPI_FLASH_SEC_SIZE,
			(uint32 *) &configs, sizeof(u_CONFIG));
}
//==============================================================================
uint16 ICACHE_FLASH_ATTR getSetTemperature()
{
	 
  unsigned int aTime = date_time.TIME.hour * 60 + date_time.TIME.min;

  int aDayNumber = getDayOfWeek();

  unsigned char aDay;
  u_CONFIG *aPtr;
  unsigned long col;
  
  if      (aDayNumber == 0)  aDay = configs.nastr.day[5];
  else if (aDayNumber == 1)  aDay = configs.nastr.day[6]; 
  else                       aDay = configs.nastr.day[aDayNumber - 2]; 
  
  u_CONFIG_u cPtr;

  if(aDay == 'H')
  {
	  cPtr = configs.cfg[1];
#ifdef COLOR_LCD
	  print_icon(8, 8, 0xff7f7f, 0x5f, 4);
#endif
  }
  else
  {
	  cPtr = configs.cfg[0];
#ifdef COLOR_LCD
	  print_icon(8, 8, 0x7f00, 0x5f, 5);
#endif
  }
      
  uint32 curPeriod = 0;

  for(curPeriod = 0; curPeriod < (cPtr.periodsCnt - 1); curPeriod++)
  {	
	unsigned int end = cPtr.pConfig[curPeriod + 1].hStart * 60 + cPtr.pConfig[curPeriod + 1].mStart;
    if(aTime < end)  break;     
  }

#ifdef COLOR_LCD
  // set temperature
  char_6x8(36 + 28 , 12 , GREEN, 0x5f, (char)(cPtr.pConfig[curPeriod].temperature / 100) + '0');
  char_6x8(48 + 28 , 12 , GREEN, 0x5f, (char)((cPtr.pConfig[curPeriod].temperature % 100) /10) + '0');
  char_6x8(60 + 28 , 12 , GREEN, 0x5f, ',');
  char_6x8(72 + 28 , 12 , GREEN, 0x5f, (char)(cPtr.pConfig[curPeriod].temperature % 10) + '0');

  // delta
  char_6x8(96 + 28 , 12 , 0x7f00, 0x5f, 0x7e);
  char_6x8(108 + 28 , 12 , 0x7f00, 0x5f, configs.nastr.delta/10 + '0');
  char_6x8(120 + 28 , 12 , 0x7f00, 0x5f, ',');
  char_6x8(132 + 28 , 12 , 0x7f00, 0x5f, configs.nastr.delta%10 + '0');
#endif

  return cPtr.pConfig[curPeriod].temperature;
}
//==============================================================================
unsigned char ICACHE_FLASH_ATTR cmpTemperature (uint16 aT, signed int arcTemper)
{  
  static unsigned char out = 0;
  
#ifndef COLOR_LCD
  Gotoxy(90,7);
#endif

  if      (arcTemper > aT + (configs.nastr.delta))
  {
#ifdef COLOR_LCD
	print_icon(34, 8, GREEN, 0x5f, 1);
#else
	print_char(0xbd);
#endif
    out = 0; 
  }
  else if (arcTemper < aT - (configs.nastr.delta))
  {
#ifdef COLOR_LCD
	  print_icon(34, 8, RED, 0x5f, 0);
#else
	  print_char(0x1e);
#endif
    out = 1;
  }
  

 return out; 
}
//==============================================================================
void ICACHE_FLASH_ATTR showTemperature(uint8 aSwap, unsigned char *aBuf)
{
#ifdef COLOR_LCD
	if (aBuf[0] == '+')
				printDigit_16x32(20 + aSwap*115, 98, GREEN, 0x1f, 11);
			else
				printDigit_16x32(20 + aSwap*115, 98, GREEN, 0x1f, 12);

			printDigit_16x32(20+16 + aSwap*115, 98, GREEN, 0x1f, aBuf[1] - '0');
			printDigit_16x32(20+16*2 + aSwap*115, 98, GREEN, 0x1f, aBuf[2] - '0');
			printDigit_16x32(20+16*3 + aSwap*115, 98, GREEN, 0x1f, 10);
			printDigit_16x32(20+16*4 + aSwap*115, 98, GREEN, 0x1f, aBuf[3] - '0');
#else
			if(aSwap)
			{
				Gotoxy(24,7);
				print_char(aBuf[0]);
				print_char(aBuf[1]);
				print_char(aBuf[2]);
				print_char('.');
				print_char(aBuf[3]);
				print_char(0xb7);
				print_char('C');
			}
			else
			{
				if (aBuf[0] == '+')
						char_24x16(12, 0, 3);
					else
						char_24x16(13, 0, 3);

					char_24x16(aBuf[1] - '0', 16, 3);
					char_24x16(aBuf[2] - '0', 32, 3);
					char_24x16(14, 48, 3);
					char_24x16(aBuf[3] - '0', 56, 3);
					char_24x16(11, 72, 3);
			}


#endif

}
