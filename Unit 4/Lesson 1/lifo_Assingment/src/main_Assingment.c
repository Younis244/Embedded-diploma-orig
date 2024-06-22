/*
 * main_Assingment.c
 *
 *  Created on: Apr 16, 2024
 *      Author: Younis
 */

#include "lifo_Assingment.h"
#include "stdio.h"
#include "stdlib.h"

unsigned int buffer[5];


void main ()
	{
		unsigned int size = 7;
		int temp = 0;

		LIFO_Buff LIFO;
		LIFO_init(&LIFO , &buffer , 5);

		for(int i=0;i<size ; i++)
			{
				if(LIFO_Add_item(&LIFO , i) == LIFO_NO_ERROR)
					printf("Add item: %d\n" , i);
			}

		for(int i=0;i<size;i++)
			{
				if(LIFO_PoP_item(&LIFO , &temp) == LIFO_NO_ERROR)
					printf("pop item: %d\n" , temp);
			}

	}

