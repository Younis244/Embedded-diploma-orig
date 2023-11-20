/*
 ============================================================================
 Name        : Lab1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "uart.h"
unsigned char string_buffer[100]="Learn-in-depth:Younis";

int main()
{
	Uart_Send_string(string_buffer);


	return 0;
}
