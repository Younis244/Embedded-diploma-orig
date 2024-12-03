/*
 * main.c
 *
 *  Created on: Nov 26, 2024
 *      Author: Younis
 */


#include "stdint.h"
#include "stdlib.h"
#include "stdio.h"


#include "LCD.h"
#include "Keypad.h"

//#include "util/delay.h"
//#include "avr/io.h"
//#include "avr/interrupt.h"
#include "Utils.h"
#include "Memap.h"


void my_wait(int x)
{
	unsigned int i ,j;
	for(i = 0 ; i<x ; i++)
		for(j = 0 ; j<255 ; j++);
}

uint8_t x = 0;
uint8_t txt[100];
int main(void)
{
	LCD_Init();
	UART_Init();
	LCD_GOTO_XY(1,0);
//	LCD_Write_String("UART TR");
//	UART_Send('M');
//	UART_Send('y');
//	UART_Send('M');
//	UART_SendNumberU32(300);
//	UART_SendString("Younis");
//	LCD_GOTO_XY(2,0);

    /* Loop forever */
	while(1)
	{
		UART_RecieveString(txt);
		LCD_Write_String(txt);
	}
}
