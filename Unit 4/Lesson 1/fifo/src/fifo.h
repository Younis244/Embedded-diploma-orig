/*
 * fifo.h
 *
 *  Created on: Apr 15, 2024
 *      Author: Younis
 */

#ifndef FIFO_H_
#define FIFO_H_

#include "stdio.h"
#include "stdint.h"

//User configuration
//Select element type
#define element_type uint8_t

//Create buffer1
#define width1 5
element_type UART_buffer[width1];

//FIFO data types
typedef struct
	{
		unsigned int length;
		unsigned int count;
		element_type* base; //bdll unsigned int*
		element_type* head;//tab mana m3rf aslan el type ely 3wz amshy beeh
		element_type* tail;
	}FIFO_Buf_t;

typedef enum
	{
		FIFO_no_error,
		FIFO_full,
		FIFO_empty,
		FIFO_null
	}FIFO_status;

//APIs
FIFO_status FIFO_init		(FIFO_Buf_t* fifo , element_type* buff , uint32_t length);
FIFO_status FIFO_enqueue	(FIFO_Buf_t* fifo , element_type item);
FIFO_status FIFO_dequeue	(FIFO_Buf_t* fifo , element_type* item);//hena hn5leeh bdl ma ykoon input bas fa la hnmlaah e7na mn gowa el Fn
FIFO_status FIFO_is_Full	(FIFO_Buf_t* fifo);
void FIFO_print				(FIFO_Buf_t* fifo);
/*kol dah ana b3rf bas el Fns w el arguements bet3tha
 * ana lesa hktb kol Fn mn gowa
 * bas ana adini 3rfft eny 3amal babasy makan el array by a ptr*/




#endif /* FIFO_H_ */
