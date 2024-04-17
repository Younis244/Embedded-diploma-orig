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

//TYPE Uart_buffer[width];


//Defining what i need in my structure
typedef struct
	{
		unsigned int length;//Kont 3amelha TYPE bas la el sa7 yb2a 4 bytes 3ady talama arkam msh ptrs
		unsigned int count;
		TYPE* base;
		TYPE* head;
		TYPE* tail;
	}FIFO_Buf_t;

typedef enum
	{
		FIFO_no_error,
		FIFO_is_empty,
		FIFO_is_full,
		FIFO_null
	}FIFO_Status;


FIFO_Status FIFO_init				(FIFO_Buf_t* fifo , unsigned int* buff , unsigned int length);//aw bdll el unsigned int ma3 length yb2a uint32_t
FIFO_Status FIFO_Enqueue			(FIFO_Buf_t* fifo , unsigned int data);
FIFO_Status FIFO_Dequeue			(FIFO_Buf_t* fifo , unsigned int* data);
FIFO_Status FIFO_IS_FULL			(FIFO_Buf_t* fifo);
void		FIFO_Print				(FIFO_Buf_t* fifo);


#endif /* FIFO_ASSINGMENT_H_ */
