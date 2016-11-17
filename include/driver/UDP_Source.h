//======================================================================================


extern sint16 plotData[2][24];

//=========== pack structure ==================================
//
//     +-----------+--------+------+-----+
//     |  byte cnt | command| data | crc |
//     +-----------+--------+------+-----+
//
//=============================================================

//================== Commands ====================================================
#define OK_ANS							(0xAA)
#define BAD_ANS							(0xEE)

#define BROADCAST_DATA					(0x10)
#define HARDWARE_CFG					(0x11)

#define PLOT_DATA						(0x20)
#define PLOT_DATA_ANS					(0x21)

#define READ_WEEK_CONFIGS				(0x30)
#define READ_WEEK_CONFIGS_ANS			(0x31)
#define SAVE_WEEK_CONFIGS				(0x32)

#define READ_DAY_CONFIGS				(0x33)
#define READ_DAY_CONFIGS_ANS			(0x34)
#define SAVE_DAY_CONFIGS				(0x35)

#define READ_USTANOVKI					(0x36)
#define READ_USTANOVKI_ANS				(0x37)
#define SAVE_USTANOVKI					(0x38)

//======================================================================================
// PLOT_DATA
//=================================
//   request data
//   +--------+------+-------+-----+------+-----+-----+
//   |  DTYPE | year | month | day | hour | min | sec |
//   +--------+------+-------+-----+------+-----+-----+
//            +----------- only in first -------------+
//   DTYPE
//   BIT7 - 0 - in, 1 - out
//   BIT3..BIT0 - pack number
//=================================
// ansver
//======================================================================================

void ICACHE_FLASH_ATTR UDP_Init();
void ICACHE_FLASH_ATTR UDP_Init_client();
void UDP_Recieved(void *arg, char *pusrdata, unsigned short length);
void   mergeAnswerWith(char tPtr[2][24][4]);
void ICACHE_FLASH_ATTR sendUDPbroadcast(uint8* abuf, uint16 aLen);
void ICACHE_FLASH_ATTR addValueToArray(char * tPtr, sint16 *arPtr, char aRot);


extern uint8 channelFree;

