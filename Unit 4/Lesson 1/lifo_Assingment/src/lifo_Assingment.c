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

LIFO_Buff_Stat LIFO_init (LIFO_Buff* lifo_buffer , unsigned int* buffer , unsigned int length)
	{
	//Checking for the buffer if its already initialized
		if(buffer == NULL)
			return LIFO_NULL;

	//Initializing all my data needed in the structure
		lifo_buffer->base = buffer;
		lifo_buffer->head = buffer;
		lifo_buffer->length = length;
		lifo_buffer->count = 0;

		return LIFO_NO_ERROR;
	}

LIFO_Buff_Stat LIFO_Add_item(LIFO_Buff* lifo_buffer , unsigned int item)
	{
		//Checking if their is base and head valid
		if(!lifo_buffer->base || !lifo_buffer->head)
			return LIFO_NO_ERROR;
		//Checking if lifo is full
		if(lifo_buffer->count == lifo_buffer->length)
			return LIFO_FULL;

		//Adding item
		*(lifo_buffer->head) = item; //Ptr byshawrrr 3ala awel 7aga fe el array
		lifo_buffer->head++;
		lifo_buffer->count++;

		return LIFO_NO_ERROR;
	}

LIFO_Buff_Stat LIFO_PoP_item (LIFO_Buff* lifo_buffer , unsigned int* item)
	{
		//Checking if their is base and head valid
		if(!lifo_buffer->base || !lifo_buffer->head)
			return LIFO_NO_ERROR;
		//Checking if lifo is empty
		if(lifo_buffer->count == 0)
			return LIFO_EMPTY;

		//Popping item
		lifo_buffer->count--;
		lifo_buffer->head--;
		*item = *(lifo_buffer->head); //bshawerr 3ala el item nafso w a7ott gowah el value ely el head mshawerr 3aleha

		return LIFO_NO_ERROR;
	}
