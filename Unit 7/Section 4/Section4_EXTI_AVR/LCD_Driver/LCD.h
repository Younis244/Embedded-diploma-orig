/*
 * LCD.h
 *
 *  Created on: Sep 4, 2024
 *      Author: Younis
 */

#ifndef LCD_H_
#define LCD_H_

#define F_CPU							8000000UL

#include "avr/io.h"
#include "util/delay.h"

#define BASE							0x20

#define LCD_PORT						*(volatile unsigned char*)(BASE + 0x1B)//PORTA
#define	DataDirection_LCD_PORT			*(volatile unsigned char*)(BASE + 0x1A)//DDRA

#define	LCD_Ctrl						*(volatile unsigned char*)(BASE + 0x18)//PORTB
#define	DataDirection_LCD_Ctrl			*(volatile unsigned char*)(BASE + 0x17)//DDRB

#define RS_Switch						1
#define RW_Switch						2
#define EN_Switch						3
#define DATA_Shift						4

#define EIGHT_BIT_MODE
//#define FOUR_BIT_MODE


/************LCD Commands************/

#define LCD_FUNCTION_8BIT_2LINES   					(0x38)
#define LCD_FUNCTION_4BIT_2LINES   					(0x28)
#define LCD_MOVE_DISP_RIGHT       					(0x1C)
#define LCD_MOVE_DISP_LEFT   						(0x18)
#define LCD_MOVE_CURSOR_RIGHT   					(0x14)
#define LCD_MOVE_CURSOR_LEFT 	  					(0x10)
#define LCD_DISP_OFF   								(0x08)
#define LCD_DISP_ON_CURSOR   						(0x0E)
#define LCD_DISP_ON_CURSOR_BLINK   					(0x0F)
#define LCD_DISP_ON_BLINK   						(0x0D)
#define LCD_DISP_ON   								(0x0C)
#define LCD_ENTRY_DEC   							(0x04)
#define LCD_ENTRY_DEC_SHIFT   						(0x05)
#define LCD_ENTRY_INC_   							(0x06)
#define LCD_ENTRY_INC_SHIFT   						(0x07)
#define LCD_BEGIN_AT_FIRST_ROW						(0x80)
#define LCD_BEGIN_AT_SECOND_ROW						(0xC0)
#define LCD_CLEAR_SCREEN							(0x01)
#define LCD_ENTRY_MODE								(0x06)



/************LCD Functions************/

void LCD_Init(void);
void LCD_Write_Command(unsigned char command);
void LCD_Write_Char(unsigned char data);
void LCD_Write_String(char* data);
void LCD_Is_Busy(void);
void LCD_Clear_Screen();
void LCD_En_Kick(void);
void LCD_GOTO_XY();
void LCD_Custom_Character();





#endif /* LCD_H_ */
