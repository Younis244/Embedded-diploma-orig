/*
 * lifo_Assingment.h
 *
 *  Created on: Apr 16, 2024
 *      Author: Younis
 */

#ifndef LIFO_ASSINGMENT_H_
#define LIFO_ASSINGMENT_H_

//#define (unsigned int)  uint
//#define (unsigned int*) ptr_uint


//defining my buffer
typedef struct
{
	unsigned int length;
	unsigned int count;
	unsigned int* base;
	unsigned int* head;
}LIFO_Buf_t;

//defining status conditions
typedef enum
{
	LIFO_no_error,
	LIFO_is_full,
	LIFO_null,
	LIFO_is_empty
}LIFO_Status;

//unsigned int buffer1[5];//3awz ab2a a3rf leh mt3rfsh hena??????????

//Prototypes of functions needed for implementing LIFO data structure
LIFO_Status LIFO_init		(LIFO_Buf_t* lifo , unsigned int* buff , unsigned int length);//hena type LIFO_Status 3ashan ha3od a3mll checking lel sob7
LIFO_Status LIFO_Add_data	(LIFO_Buf_t* lifo , unsigned int data);
LIFO_Status LIFO_POP_data	(LIFO_Buf_t* lifo , unsigned int* data);//enta btll3 el value abl ma te minus el head fa m7tag te access el array by ptr

#endif /* LIFO_ASSINGMENT_H_ */
