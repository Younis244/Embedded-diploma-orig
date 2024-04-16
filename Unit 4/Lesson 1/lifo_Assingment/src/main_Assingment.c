/*
 * main_Assingment.c
 *
 *  Created on: Apr 16, 2024
 *      Author: Younis
 */

#include "lifo_Assingment.h"
#include "stdio.h"
#include "stdlib.h"

unsigned int buffer1[5]; //global fa hyt5zn fe el data memory

void main()
{
	int i,temp=0;
	LIFO_Buf_t uart_lifo , I2C_lifo;
	//Static allocation
	LIFO_init(&uart_lifo , buffer1 , 5);

	//Dynamic allocation
	unsigned int* buffer2=(unsigned int*)malloc(5*sizeof(unsigned int));
	LIFO_init(&I2C_lifo , buffer2 , 5);


//////////////////////////////////
// For UART// With Static allocation
	for(i=0;i<5;i++)
		{//Always check that you have zero errors as to cont.
			if(LIFO_Add_data(&uart_lifo , i) == LIFO_no_error)
				printf("UART Addition of item %d\n",i);
		}

	printf("\n================== \n\n");

	for(i=0;i<5;i++)
		{
		//Always check
			if(LIFO_POP_data(&uart_lifo , &temp) == LIFO_no_error)
				printf("UART Popping item %d\n",temp);
		}

	printf("\n================== \n\n");

/////////////////////////////////
//For I2C//With Dynamic allocation
	for(i=0;i<5;i++)
		{//Always check that you have zero errors as to cont.
				if(LIFO_Add_data(&I2C_lifo , i) == LIFO_no_error)
					printf("I2C Addition of item %d\n",i);
		}

		printf("\n================== \n\n");

	for(i=0;i<5;i++)
		{
			//Always check
				if(LIFO_POP_data(&I2C_lifo , &temp) == LIFO_no_error)
					printf("I2C Popping item %d\n",temp);
		}



}


