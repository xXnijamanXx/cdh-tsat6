#ifndef INCLUDE_CAN_H_
#define INCLUDE_CAN_H_
//-------------------------------------------------------------------------------------------------------------------------------------------------------------
// UMSATS 2022
//
// License:
//  Available under MIT license.
//
// Repository:
//  Github: https://github.com/UMSATS/cdh-tsat6
//
// File Description:
//  Functions for CAN initialization, message reception, and message transmission.
//
// History
// 2022-05-25 by Graham Driver
// - Created/Adapted from tsat5.
//-------------------------------------------------------------------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------------------------------------------------------------------
// INCLDUES
//-------------------------------------------------------------------------------------------------------------------------------------------------------------
#include "stm32l4xx_hal.h"

//-------------------------------------------------------------------------------------------------------------------------------------------------------------
// DEFINITIONS AND MACROS
//-------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MAX_CAN_DATA_LENGTH 8 // Maximum bytes in one CAN frame
#define ID 0x1 // The ID number of the device

//-------------------------------------------------------------------------------------------------------------------------------------------------------------
// FUNCTION PROTOTYPES
//-------------------------------------------------------------------------------------------------------------------------------------------------------------


HAL_StatusTypeDef boot_CAN(CAN_HandleTypeDef *hcan1); // Initializes and Starts the CAN


HAL_StatusTypeDef CAN_transmit_message(
		CAN_HandleTypeDef *hcan1, // CAN object
		uint8_t message[]   // Pointer to the CAN message
);


HAL_StatusTypeDef CAN_MESSAGE_RECEIVED(CAN_HandleTypeDef *hcan1);    // Interrupt handler for CAN BUS
#endif /* INCLUDE_CAN_H_ */
