/*
 * Services.h
 *
 *  Created on: 16 ����. 2016
 *      Author: Voodoo
 */

#ifndef INCLUDE_DRIVER_SERVICES_H_
#define INCLUDE_DRIVER_SERVICES_H_
//==============================================================================

void ICACHE_FLASH_ATTR service_timer_start (void);
void ICACHE_FLASH_ATTR service_timer_stop (void);
void ICACHE_FLASH_ATTR button_intr_callback(unsigned pin, unsigned level);
void ICACHE_FLASH_ATTR button_init(void);
void ICACHE_FLASH_ATTR getTemperature(void);
//==============================================================================
#define MODE_NORMAL		(0)
#define MODE_SW_RESET	(1)
#define MODE_BTN_RESET	(2)
#define MODE_REMOTE_CONTROL	(3)
#define MODE_FLASH_WRITE	(4)
//==============================================================================
extern uint8	serviceMode;
extern char tData[2][4];
//==============================================================================
typedef union __packed
{
	uint8 byte[1 + 8 + 6];
	struct __packed
	{
		uint8 head;
		uint8 sData[2][4];
		uint8 timeData[6];
	};
}u_REMOTE_TEMP;
extern u_REMOTE_TEMP remoteTemp;
//==============================================================================
typedef struct
{
  union
  {
    unsigned int byte[3];
    struct
    {
      unsigned int day;
      unsigned int month;
      unsigned int year;
    };
  }DATE;
  union
  {
    unsigned char byte[3];
    struct
    {
      unsigned char sec;
      unsigned char min;
      unsigned char hour;
    };
  }TIME;
}s_DATE_TIME;
extern s_DATE_TIME date_time;
//==============================================================================
#endif /* INCLUDE_DRIVER_SERVICES_H_ */
