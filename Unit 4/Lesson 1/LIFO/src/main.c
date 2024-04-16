/*
 * main.c
 *
 *  Created on: Apr 14, 2024
 *      Author: Younis
 */

#include "lifo.h"
#include "stdio.h"
#include "stdlib.h"//lel malloc w keda

unsigned int buffer1 [5]; //dah et7gz fe el data memory
//unsigned int buffer2 [5];



void main ()
{
	int i,temp=0;
	LIFO_Buf_t uart_lifo,I2C_lifo;
	//static allocation
	LIFO_init(&uart_lifo,buffer1,5); //baseeet & 3ashan howa aslan ptr w buff 1 eqv le add buff[0]
	//Dynamic allocation w dah keda et7gz fe el heap
	unsigned int* buffer2=(unsigned int*)malloc(5*sizeof(unsigned int)); //5*4=20
	LIFO_init(&I2C_lifo,buffer2,5);


	for(i=0;i<5;i++)
	{
		if(LIFO_Add_item(&uart_lifo,i)==LIFO_no_error)
			printf("UART_LIFO Add: %d\n",i);
	}

	printf("\n");
	for(i=0;i<5;i++)
	{
		if(LIFO_POP_item(&uart_lifo,&temp)==LIFO_no_error)
			printf("UART_LIFO POP: %d\n",temp);
	}
}

