/*
 * UART.h
 *
 *  Created on: Nov 26, 2024
 *      Author: Younis
 */

#ifndef MCAL_UART_H_
#define MCAL_UART_H_

#include "stdint.h"
#include "stdlib.h"
#include "Memap.h"
#include "Utils.h"



/*
 * ==============================================================================
 * 							APIs Supported by "MCAL GPIO Driver"
 * ==============================================================================
 */

void UART_Init(void);
void UART_Send(uint8_t data);
uint8_t UART_Receive(void);

void UART_SendNumberU32(uint32_t number);
uint32_t UART_RecieveNumberU32(void);

void UART_SendString(uint8_t* string);
void UART_RecieveString(uint8_t txt[100]);



#endif /* MCAL_UART_H_ */
