/*
 * app_config.h
 *
 *  Created on: Oct 27, 2020
 *      Author: quangnd
 */

#ifndef APP_CONFIG_APP_CONFIG_H_
#define APP_CONFIG_APP_CONFIG_H_
#include "core_hal.h"

/*timeout*/
#define APP_STATE_MACHINE_UPDATE_TICK_mS 		(1000/HAL_SYSTICK_FREQ_Hz)
#define BP_INACTIVE_TIMEOUT_mS           		5000
#define CHECK_HMI_MSG_TIME_mS					200
#define SDO_SET_BMS_MAIN_SW_TIMEOUT_mS			1000
#define PDO_READ_BP_DATA_TIME_mS				2000
#define WAIT_BP_ASSIGN_REQ_TIMEOUT_mS			300
#define SLAVE_SELECT_CONFIRM_TIMEOUT_mS			200
#define CHARGER_NO_CURRENT_TIMEOUT				4000
#define WAIT_BP_WRITE_DATA_TO_FLASH				1500
#define READ_AC_METTER_TIMEOUT_mS				300
/*number*/
#define MAX_CABINET_AVAILABLE					19
#define MAX_ASSIGNED_CABINET					((MAX_CABINET_AVAILABLE + 1)/2)
#define CABINET_CELL_NUM						MAX_CABINET_AVAILABLE
#define CABINET_INIT							(CABINET_CELL_NUM + 1)
#define CHARGER_NUM								2
#define MAX_ASSIGNED_CAB_NUM					(CABINET_INIT/2)

/*threshold*/
#define BP_START_CHARGE_THRESHOLD				65500
#define BP_STOP_CHARGER_THRESHOLD				67200
#define BP_OVER_CHARGE_THRESHOLD				67200
#define CUR_STOP_CHARGER_THRESHOLD				1000
#define BP_TEMP_START_CHARGER					45

#define REASSIGN_ATTEMP_COUNTER 				3

#define AVAILABLE_HMI_MSG_NUM					3

#define VREF									3300
#define ADC_RESOLUTION							4095

#define ENABLE_CELL_FAN							0
#define ENABLE_IWDG_TIMER						0
#define ENABLE_CHARGER							1

#define CABINET_START_NODE_ID					5
#define BP_BOOT_NODE_ID							4

#define USE_DMA_UART_TRANSMIT					0
#define NEW_CANOPEN_LIB							1			// 1 : use new canopen_lib

typedef enum CABIN_ID{
	CAB1 = 0,
	CAB2 = 1,
	CAB3 = 2,
	CAB4 = 3,
	CAB5 = 4,
	CAB6 = 5,
	CAB7 = 6,
	CAB8 = 7,
	CAB9 = 8,
	CAB10 = 9,
	CAB11 = 10,
	CAB12 = 11,
	CAB13 = 12,
	CAB14 = 13,
	CAB15 = 14
} CABIN_ID;

typedef enum SLAVE_ID{
	BP_DEFAULT_CAN_NODE_ID = 4,
	SL1 = 5,
	SL2 = 6,
	SL3 = 7,
	SL4 = 8,
	SL5 = 9,
	SL6 = 10,
	SL7 = 11,
	SL8 = 12,
	SL9 = 13,
	SL10 = 14,
	SL11 = 15,
	SL12 = 16,
	SL13 = 17,
	SL14 = 18,
	SL15 = 19,
} SLAVE_ID;

#define RSDO_ID			0x600			/* BSS to BP (Server Receive) */
#define TSDO_ID			0x580			/* BP to BSS (Server Transmitt) */
#define MASTER_ID		3

#define TPDO1_ID		0x180
#define TPDO2_ID		0x280
#define	TPDO3_ID		0x380
#define TPDO4_ID		0x480

#define NODE_ID_RESPONSE_TIMEOUT	10

typedef enum TIMING_STATE{
	TIMING_ST_DEACTIVE = 0,
	TIMING_ST_ACTIVE = 1
} TIMING_STATE;


#endif /* APP_CONFIG_APP_CONFIG_H_ */
