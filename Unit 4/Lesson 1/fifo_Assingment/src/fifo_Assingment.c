/*
 ============================================================================
 Name        : fifo_Assingment.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "fifo_Assingment.h"

#define ZERO 0

FIFO_Stat FIFO_init 	(FIFO_Buffer* fifo , TYPE* buffer , unsigned int length)
	{
		//Check if array is null
		if(buffer == NULL)
			return FIFO_NULL;

		//Inittialize all data
		fifo->base = buffer;
		fifo->head = buffer;
		fifo->tail = buffer;
		fifo->length = length;
		fifo->count = ZERO;

		return FIFO_NO_ERROR;
	}

FIFO_Stat FIFO_enqueue 	(FIFO_Buffer* fifo , TYPE item)
	{
		//Checking if fifo is null for safety
		if(!fifo->base || !fifo->head || !fifo->tail)
			return FIFO_NULL;

		//Check if it full
		if(IS_IT_FULL(fifo) == FIFO_FULL)
			return FIFO_FULL;

		*(fifo->head) = item; //As it points to the element in the array
		fifo->count++;

		if(fifo->head == (fifo->base + (fifo->length)*sizeof(TYPE)))
			fifo->head = fifo->base;
		else
			fifo->head++;


		return FIFO_NO_ERROR;
	}

FIFO_Stat FIFO_dequeue 	(FIFO_Buffer* fifo , TYPE* item)
	{
		//Checking if fifo is null for safety
		if(!fifo->base || !fifo->head || !fifo->tail)
			return FIFO_NULL;

		//Check if it empty
		if(IS_IT_EMPTY(fifo) == FIFO_EMPTY)
			return FIFO_EMPTY;

		//Note: until now we are matching lifo's code but in dequeue
		//I won't minus the head as the tail is the one who is removing the data
		//So i should control it by using tail
		//Don't forget FIFO : first in first out
		*item = *(fifo->tail);
		fifo->count--;
		if(fifo->tail == (fifo->base + (fifo->length)*sizeof(TYPE)))
			fifo->tail = fifo->base;
		else
			fifo->tail++;

		return FIFO_NO_ERROR;
	}

FIFO_Stat IS_IT_FULL	(FIFO_Buffer* fifo)
	{
		//Checking if fifo is null for safety
		if(!fifo->base || !fifo->head || !fifo->tail)
			return FIFO_NULL;

		if(fifo->count == fifo->length)
			return FIFO_FULL;

		return FIFO_NO_ERROR;
	}

FIFO_Stat IS_IT_EMPTY	(FIFO_Buffer* fifo)
	{
		//Checking if fifo is null for safety
		if(!fifo->base || !fifo->head || !fifo->tail)
			return FIFO_NULL;

		if(fifo->count == ZERO)
			return FIFO_EMPTY;

		return FIFO_NO_ERROR;
	}

void print_Fifo_data	(FIFO_Buffer* fifo)
	{
		int i;
		TYPE* temp;
		if(fifo->count == ZERO)
			printf("Fifo is empty.....\n");
		temp = fifo->tail;
		printf("\n===========================\n");
		for(i = 0 ; i<fifo->count ; i++)
			{
				//temp = fifo->tail;
				printf("\t%d\n" , *temp);
				temp++;
			}
		printf("===========================\n");
	}


