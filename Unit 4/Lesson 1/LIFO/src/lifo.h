/*
 * lifo.h
 *
 *  Created on: Apr 14, 2024
 *      Author: Younis
 */

#ifndef LIFO_H_
#define LIFO_H_

//Type definitions
typedef struct
	{
		unsigned int length;
		unsigned int count;
		unsigned int* base; //ptrs 3ashan yeshwro 3al makan w ye push w keda
		unsigned int* head;
	}LIFO_Buf_t; //lifo buffer type


typedef enum
	{
		LIFO_no_error, // by default in enum 1st element is zero
		LIFO_full,
		LIFO_empty,
		LIFO_NuLL
	}LIFO_Status;

//APIs
LIFO_Status LIFO_Add_item	(LIFO_Buf_t* lifo_buf,unsigned int item);//ptr lel data ely gowa el struct
LIFO_Status LIFO_POP_item	(LIFO_Buf_t* lifo_buf,unsigned int* item);//3ashan el marady howa ely hyzwdli feha el value fa ba2a ptr
LIFO_Status LIFO_init		(LIFO_Buf_t* lifo_buf,unsigned int* buf,unsigned int length);//dh lel array

#endif /* LIFO_H_ */
