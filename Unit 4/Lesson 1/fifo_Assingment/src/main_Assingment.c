/*
 * main_Assingment.c
 *
 *  Created on: Apr 16, 2024
 *      Author: Younis
 */


#include "fifo_Assingment.h"
#include "stdio.h"

TYPE buffer[width];

void main()
	{
		TYPE i,temp ;
		FIFO_Buffer fifo;


		if(FIFO_init(&fifo , &buffer , width) == FIFO_NO_ERROR)
			printf("=============Fifo init is done=============\n");

		for(i = 0; i<7; i++)
			{
				printf("\nFifo enqueue (%d)\n" , i);
				if(FIFO_enqueue(&fifo , i) == FIFO_NO_ERROR)
					printf("=============Fifo is done=============\n") ;
				else
					printf("=============Fifo is failed=============\n") ;
			}

//		for(i = 0 ; i<width ; i++)
//			{
//				TYPE* temp;
//				temp = fifo->tail;
//				printf("%d\n" , temp);
//			}
//Its better to do a Fn to print FIFO as to pass the add of the buffer
		print_Fifo_data(&fifo);

		if(FIFO_dequeue(&fifo , &temp) == FIFO_NO_ERROR)
			printf("Fifo dequeue(%d)\n" , temp);
		if(FIFO_dequeue(&fifo , &temp) == FIFO_NO_ERROR)
			printf("Fifo dequeue(%d)\n" , temp);
		if(FIFO_dequeue(&fifo , &temp) == FIFO_NO_ERROR)
			printf("Fifo dequeue(%d)\n" , temp);

		print_Fifo_data(&fifo);

//		FIFO_enqueue(&fifo , 5);
//
//		print_Fifo_data(&fifo);
	}
