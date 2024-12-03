/*
 * Memap.h
 *
 *  Created on: Nov 26, 2024
 *      Author: Younis
 */

#ifndef MEMAP_H_
#define MEMAP_H_

#define Base 				0x20

#define	UDR					*(volatile unsigned char*)(Base + 0x0C)

#define	UCSRA				*(volatile unsigned char*)(Base + 0x0B)//USART Control and Status Register A
#define	UCSRB				*(volatile unsigned char*)(Base + 0x0A)//USART Control and Status Register B
#define	UCSRC				*(volatile unsigned char*)(Base + 0x20)//USART Control and Status Register C

#define	UBRRL				*(volatile unsigned char*)(Base + 0x09)//USART Baud Rate Register Low
#define	UBBRH				*(volatile unsigned char*)(Base + 0x20)//USART Baud Rate Register High


#endif /* MEMAP_H_ */
