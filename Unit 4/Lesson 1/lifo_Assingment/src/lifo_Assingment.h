/*
 * lifo_Assingment.h
 *
 *  Created on: Apr 16, 2024
 *      Author: Younis
 */

#ifndef LIFO_ASSINGMENT_H_
#define LIFO_ASSINGMENT_H_

#include "stdlib.h"
#include "stdint.h"


//The data i need to do a LIFO structure data
typedef struct
	{
		unsigned int* head;
		unsigned int* base;
		unsigned int length;
		unsigned int count;
	}LIFO_Buff;

//The conditions found
typedef enum
	{
		LIFO_NO_ERROR,
		LIFO_FULL,
		LIFO_EMPTY,
		LIFO_NULL
	}LIFO_Buff_Stat;


//Prototypes of Fn's needed for the structure

LIFO_Buff_Stat LIFO_init (LIFO_Buff* lifo_buffer , unsigned int* buffer , unsigned int length);
LIFO_Buff_Stat LIFO_Add_item(LIFO_Buff* lifo_buffer , unsigned int item);
LIFO_Buff_Stat LIFO_PoP_item (LIFO_Buff* lifo_buffer , unsigned int* item);


#endif /* LIFO_ASSINGMENT_H_ */
