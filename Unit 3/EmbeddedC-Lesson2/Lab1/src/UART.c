/*
 * UART.c
 *
 *  Created on: Nov 20, 2023
 *      Author: Younis
 */

#include "uart.h"
#define UART0DR *((volatile unsigned int*)((unsigned int*)0x101f1000))
// el pointer ely beyshawer 3al add dah 7ott gowah el value ely hat7otaha

void Uart_Send_string(unsigned char* P_tx_string)
{
	while (*P_tx_string!='\0')
	{
		UART0DR=(unsigned int)(*P_tx_string);
		P_tx_string++;
	}
}
