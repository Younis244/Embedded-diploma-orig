/*
 * main_Assingment.c
 *
 *  Created on: Apr 16, 2024
 *      Author: Younis
 */


#include "fifo_Assingment.h"
#include "stdio.h"

void main()
	{
		TYPE i,temp,Uart_buffer[5];
		FIFO_Buf_t FIFO_Uart;
		if(FIFO_init(&FIFO_Uart , Uart_buffer , 5) == FIFO_no_error)
			printf("FIFO init is done\n\n");
			printf("=================================\n");

		//For enqueue
		for(i=0;i<8;i++)
		{
			printf("FIFO Enqueue (%x) \n",i);
			if(FIFO_Enqueue(&FIFO_Uart,i) == FIFO_no_error)
				printf("\t fifo enqueue done----\n");
			else
				printf("\t fifo enqueue failed----\n");
		}
		printf("\nFIFO Enqueued\n=================================\n");
		FIFO_Print(&FIFO_Uart);


		//For dequeue
		if(FIFO_Dequeue(&FIFO_Uart,&temp) == FIFO_no_error)
			printf("fifo dequeue %x\n",temp);

		if(FIFO_Dequeue(&FIFO_Uart,&temp) == FIFO_no_error)
			printf("fifo dequeue %x\n",temp);

		printf("=================================\n");

		printf("The rest of data enqueued\n");
		//The rest of data enqueued (2,3,4)
		FIFO_Print(&FIFO_Uart);


	}
