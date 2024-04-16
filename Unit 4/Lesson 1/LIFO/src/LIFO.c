/*
 ============================================================================
 Name        : LIFO.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "lifo.h"


LIFO_Status LIFO_Add_item	(LIFO_Buf_t* lifo_buf,unsigned int item)//ptr lel data ely gowa el struct
	{
		//check if lifo is valid
		if(!lifo_buf->base || !lifo_buf->head)
			return LIFO_NuLL;

		//check if lifo is full
		if(lifo_buf->count == lifo_buf->length)
			return LIFO_full;

		//addvalue
		*(lifo_buf->head) = item;
		lifo_buf->head++;
		lifo_buf->count++;

		return LIFO_no_error;
	}

LIFO_Status LIFO_POP_item	(LIFO_Buf_t* lifo_buf,unsigned int* item)//3ashan el marady howa ely hyzwdli feha el value fa ba2a ptr
	{
	//check if lifo is valid
	if(!lifo_buf->base || !lifo_buf->head)
				return LIFO_NuLL;

	//check if lifo is empty
	if(lifo_buf->count==0)
		return LIFO_empty;

	lifo_buf->head--; //rg3t el head 5twa le wara
	*item=*(lifo_buf->head);//rg3t el value ely 3wzo
	lifo_buf->count--;//3mllt minus lel count be wa7ed

	return LIFO_no_error;

	}

LIFO_Status LIFO_init		(LIFO_Buf_t* lifo_buf,unsigned int* buf, unsigned int length)//dh lel array
	{
		if(buf==NULL)
			return LIFO_NuLL;

		lifo_buf->base= buf;
		lifo_buf->head= buf;
		lifo_buf->length= length;
		lifo_buf->count= 0;

		return LIFO_no_error; //dah fe 7alett en 5alas ana tmam w 3deet el if
	}
