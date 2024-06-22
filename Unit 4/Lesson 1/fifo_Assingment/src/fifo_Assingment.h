/*
 * fifo_Assingment.h
 *
 *  Created on: Apr 16, 2024
 *      Author: Younis
 */

#ifndef FIFO_ASSINGMENT_H_
#define FIFO_ASSINGMENT_H_

#include "stdint.h"

#define TYPE uint8_t //A byte each (8bits=1byte)
#define width 5

typedef struct
	{
		TYPE* base;
		TYPE* head;
		TYPE* tail;
		unsigned int length;
		unsigned int count;
	}FIFO_Buffer;

typedef enum
	{
		FIFO_NO_ERROR,
		FIFO_FULL,
		FIFO_EMPTY,
		FIFO_NULL
	}FIFO_Stat;

FIFO_Stat FIFO_init 	(FIFO_Buffer* fifo , TYPE* buffer , unsigned int length);
FIFO_Stat FIFO_enqueue 	(FIFO_Buffer* fifo , TYPE item);
FIFO_Stat FIFO_dequeue 	(FIFO_Buffer* fifo , TYPE* item);
FIFO_Stat IS_IT_FULL	(FIFO_Buffer* fifo);
FIFO_Stat IS_IT_EMPTY	(FIFO_Buffer* fifo);
void print_Fifo_data	(FIFO_Buffer* fifo);



#endif /* FIFO_ASSINGMENT_H_ */
