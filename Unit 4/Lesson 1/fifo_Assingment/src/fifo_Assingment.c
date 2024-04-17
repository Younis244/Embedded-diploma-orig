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



//Initializing my structure data
FIFO_Status FIFO_init				(FIFO_Buf_t* fifo , unsigned int* buff , unsigned int length)//aw bdll el unsigned int ma3 length yb2a uint32_t
	{

		if(fifo==NULL)
			return FIFO_null;

		fifo->base=buff;
		fifo->head=buff;
		fifo->tail=buff;
		fifo->length=length;
		fifo->count=0;

		return FIFO_no_error;
	}


//Start inserting data
FIFO_Status FIFO_Enqueue			(FIFO_Buf_t* fifo , unsigned int data)
	{
		//Checking if fifo is valid
			if(!fifo->base || !fifo->head || !fifo->tail)
				return FIFO_null;

		//Checking if fifo is full
			if(FIFO_IS_FULL(fifo)==FIFO_is_full)
				return FIFO_is_full;

		//Starting adding data or enqueue
			*(fifo->head)=data;
			fifo->count++;

		//Checking circular conditions
			if(fifo->head == (fifo->base+(fifo->length * sizeof(TYPE)))) //en law wsllt le a5er el jar fa la rg3ha lel base
				fifo->head=fifo->base;
			else
				fifo->head++;


			return FIFO_no_error;
	}

FIFO_Status FIFO_Dequeue			(FIFO_Buf_t* fifo , unsigned int* data)
	{
		//Checking if fifo is valid
			if(!fifo->base || !fifo->head || !fifo->tail)
				return FIFO_null;

		//Checking if fifo is empty
			if(fifo->count==0)
				return FIFO_is_empty;

			*data=*(fifo->tail); //3ashan me7tag aaa access el array fa ptr
			fifo->count--;

		//Nafs el circular check beta3 el equeue bas bdll head fa tail
		//Checking circular conditions
			if(fifo->tail == (fifo->base+(fifo->length * sizeof(TYPE)))) //en law wsllt le a5er el jar fa la rg3ha lel base
				fifo->tail=fifo->base;
			else
				fifo->tail++;

		return FIFO_no_error;
	}


//Fn to check if structure is full
FIFO_Status FIFO_IS_FULL			(FIFO_Buf_t* fifo)
	{
		//Checking if fifo is valid
			if(!fifo->base || !fifo->head || !fifo->tail)
				return FIFO_null;
		//Checking if full
			if(fifo->count==fifo->length)
				return FIFO_is_full;

			return FIFO_no_error;
	}



void		FIFO_Print				(FIFO_Buf_t* fifo)//Void fa mafeesh return
	{
		TYPE* temp=0;//3mlto ptr 3ashan yo3od y2ra mn el tail
		int i;

		//Checking before printing if fifo is empty
		if(fifo->count==0)
		{
			printf("\n======FIFO is empty======\n");
		}
		else
		{
			temp=fifo->tail;
			for(i=0;i<fifo->count;i++)
			{
				printf("\t %X \n",*temp);//ely gowa el temp 3wz aa print
				temp++;//eny a7rk el ptr 3ala koloo
			}
			printf("=================================\n");
		}
	}
