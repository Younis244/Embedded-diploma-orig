/*
 ============================================================================
 Name        : FIFO-orig.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "stdio.h"
#include <stdlib.h>
#include "stdint.h"
#include "fifo.h"

FIFO_status FIFO_init		(FIFO_Buf_t* fifo , element_type* buff , uint32_t length)
	{
		if(buff == NULL)
			return FIFO_null;

		fifo->base = buff;
		fifo->head = buff;
		fifo->tail = buff;
		fifo->length = length;
		fifo->count = 0;

		return FIFO_no_error;
	}

FIFO_status FIFO_enqueue	(FIFO_Buf_t* fifo , element_type item)
	{
	//If valid
		if(!fifo->base || !fifo->head || !fifo->tail)
			return FIFO_null;
	//I fifo is full
		if(FIFO_is_Full(fifo) == FIFO_full)
			return FIFO_full;

		*(fifo->head)=item;
		fifo->count++;
	//Circular fifo check
		if(fifo->head == (fifo->base + (fifo->length * sizeof(element_type))))
			fifo->head = fifo->base;
		else
			fifo->head++;

		return FIFO_no_error;
	}

FIFO_status FIFO_dequeue	(FIFO_Buf_t* fifo , element_type* item)//hena hn5leeh bdl ma ykoon input bas fa la hnmlaah e7na mn gowa el Fn
	{
	//If valid
		if(!fifo->base || !fifo->head || !fifo->tail)
			return FIFO_null;

		if(fifo->count == 0)
			return FIFO_empty;

		*item = *(fifo->tail);//kanet 3mlaly moshkela fe el dequeue print
		fifo->count--;

	//circulat fifo check
		if(fifo->tail == (fifo->base + (fifo->length * sizeof(element_type))))
			fifo->tail = fifo->base;
		else
			fifo->tail++;

		return FIFO_no_error;
	}

FIFO_status FIFO_is_Full		(FIFO_Buf_t* fifo)
	{
		if(!fifo->base || !fifo->head || !fifo->tail)
					return FIFO_null;
		if(fifo->count == fifo->length)
			return FIFO_full;
		return FIFO_no_error;
	}

void FIFO_print				(FIFO_Buf_t* fifo)
	{
		element_type* temp;
		int i;
		if(fifo->count == 0)
		{
			printf("fifo is empty \n");
		}
		else
		{
			temp = fifo->tail;
			printf("\n =====fifo print=====\n");
			for(i=0;i<fifo->count;i++)
			{
				printf("\t %X \n",*temp);//ely gowa el temp
				temp++;//increment el ptr
			}
			printf("================\n");
		}
	}
