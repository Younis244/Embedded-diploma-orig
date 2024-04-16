/*
 ============================================================================
 Name        : lifo_Assingment.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "lifo_Assingment.h"



//Initializing my structure data
LIFO_Status LIFO_init		(LIFO_Buf_t* lifo , unsigned int* buff , unsigned int length)//hena tab3an
	{
		//Checking if my array is null
			if(buff == NULL)
				return LIFO_null;

			lifo->base = buff;
			lifo->head = buff;
			lifo->length = length;
			lifo->count = 0;

			return LIFO_no_error;
	}



//Starting adding values in my structure
LIFO_Status LIFO_Add_data	(LIFO_Buf_t* lifo , unsigned int data)
	{
		//Checking if lifo is valid
			if(!lifo->base || !lifo->head)
					return LIFO_null;

		//Checking if lifo is full
			//if(lifo->head == lifo->base + lifo->length * 4)
			if(lifo->count == lifo->length)
					return LIFO_is_full;

		//After cheching i start adding my data
			*(lifo->head) = data;
			lifo->head++;
			lifo->count++;

			return LIFO_no_error;
	}



//Then popping data Last in First out (Like a jar)
LIFO_Status LIFO_POP_data	(LIFO_Buf_t* lifo , unsigned int* data)//enta btll3 el value abl ma te minus el head fa m7tag te access el array by ptr
	{

		//Checking if lifo is valid
			if(!lifo->base || !lifo->head)
					return LIFO_null;

		//Checking if lifo is empty
			if(lifo->count == 0)
					return LIFO_is_empty;

		//After checking then i will pop my data
			lifo->head--; //brg3 el head le wara
			*data=*(lifo->head);//then a5od el data ely gowa
			lifo->count--;


			return LIFO_no_error;
	}

