/*
 * Keypad.h
 *
 *  Created on: Sep 10, 2024
 *      Author: Younis
 */

#ifndef KEYPAD_DRIVER_KEYPAD_H_
#define KEYPAD_DRIVER_KEYPAD_H_

#define F_CPU							1000000UL

#include "avr/io.h"
#include "util/delay.h"


#define BASE						0x20

#define Keypad_Port					*(volatile unsigned char*)(BASE + 0x12)//PORTD
#define DataDirection_Keypad_Port	*(volatile unsigned char*)(BASE + 0x11)//DDRD
#define Keypad_Pin					*(volatile unsigned char*)(BASE + 0x10)//PIND

//Rows of Keypad--> defining pins
#define R0							0
#define R1							1
#define R2							2
#define R3							3

//Columns of Keypad--> defining pins
#define C0							4
#define C1							5
#define C2							6
#define C3							7

/************Keypad Functions************/

void Keypad_Init();
char Keypad_GetChar();
#endif /* KEYPAD_DRIVER_KEYPAD_H_ */
