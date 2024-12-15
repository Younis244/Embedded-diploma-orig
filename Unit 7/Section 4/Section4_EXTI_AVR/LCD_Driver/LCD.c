/*
 * LCD.c
 *
 *  Created on: Sep 4, 2024
 *      Author: Younis
 */

#include "LCD.h"

void LCD_En_Kick()
{
	LCD_Ctrl &= ~(1<<EN_Switch);
	_delay_ms(50);// using Enable Cycle time in Bus timing characteristics in data sheet
	LCD_Ctrl |= (1<<EN_Switch);
}

void LCD_GOTO_XY(int line , int position)
{
	if(line == 1)
	{
		if(position < 16 && position >= 0)
		{
			LCD_Write_Command(LCD_BEGIN_AT_FIRST_ROW + position);//Ely howa ht7rko be character 0x80+
		}
	}
	else if(line == 2)
	{
		if(position < 32 && position >= 0)
		{
			LCD_Write_Command(LCD_BEGIN_AT_SECOND_ROW + position);//Ely howa ht7rko be character 0xC0+
		}
	}
}

void LCD_Clear_Screen()
{
	LCD_Write_Command(LCD_CLEAR_SCREEN);
}

void LCD_Is_Busy(void)
{
	DataDirection_LCD_PORT &= ~(0xFF<<DATA_Shift);//To make it input
	LCD_Ctrl |= (1<<RW_Switch); //Read mode
	LCD_Ctrl &= ~(1<<RS_Switch); //RS off
	LCD_En_Kick();
	DataDirection_LCD_PORT |= (0xFF<<DATA_Shift);
	LCD_Ctrl &= ~(1<<RW_Switch);

	//Kan mbwzlli el denyaaa
//	LCD_Clear_Screen();
}


void LCD_Init(void)
{
	_delay_ms(20);
	//LCD_Is_Busy();
	DataDirection_LCD_Ctrl |= ((1<<EN_Switch) | (1<<RW_Switch) | (1<<RS_Switch));
	LCD_Ctrl &= ~((1<<EN_Switch) | (1<<RW_Switch) | (1<<RS_Switch));
	DataDirection_LCD_PORT = 0xFF;
	_delay_ms(15);
	LCD_Is_Busy();
	LCD_Clear_Screen();

	#ifdef EIGHT_BIT_MODE
		LCD_Write_Command(LCD_FUNCTION_8BIT_2LINES);
	#endif

	#ifdef FOUR_BIT_MODE
		//A command needed for using 4 bit mode
		LCD_Write_Command(0x02);
		LCD_Write_Command(LCD_FUNCTION_4BIT_2LINES);
	#endif

	LCD_Write_Command(LCD_ENTRY_MODE);
	LCD_Write_Command(LCD_BEGIN_AT_FIRST_ROW);
	LCD_Write_Command(LCD_DISP_ON_CURSOR_BLINK);
}


void LCD_Write_Command(unsigned char command)
{
	LCD_Is_Busy();

	#ifdef EIGHT_BIT_MODE
		LCD_PORT = command;
		LCD_Ctrl &= ~((1<<RW_Switch) | (1<<RS_Switch));
		_delay_ms(1);
		LCD_En_Kick();
	#endif

	#ifdef FOUR_BIT_MODE
		//First part of command
		LCD_PORT = ((LCD_PORT & 0x0F) | (command & 0xF0));
		LCD_Ctrl &= ~((1<<RW_Switch) | (1<<RS_Switch));
		_delay_ms(1);
		LCD_En_Kick();

		//Second 4 bits
		LCD_PORT = ((LCD_PORT & 0x0F) | (command << 4));
		LCD_Ctrl &= ~((1<<RW_Switch) | (1<<RS_Switch));
		_delay_ms(1);
		LCD_En_Kick();
	#endif
}

void LCD_Write_Char(unsigned char data)
{
	//LCD_Is_Busy();

	#ifdef EIGHT_BIT_MODE
		LCD_PORT = data;
		LCD_Ctrl &= ~(1<<RW_Switch);
		LCD_Ctrl |= (1<<RS_Switch);
		_delay_ms(1);
		LCD_En_Kick();
	#endif

	#ifdef FOUR_BIT_MODE
		//First part of command
		LCD_PORT = ((LCD_PORT & 0x0F) | (data & 0xF0));
		LCD_Ctrl |= (1<<RS_Switch);
		LCD_Ctrl &= ~(1<<RW_Switch);
		_delay_ms(1);
		LCD_En_Kick();

		//Second 4 bits
		LCD_PORT = ((LCD_PORT & 0x0F) | (data << 4));
		LCD_Ctrl |= (1<<RS_Switch);
		LCD_Ctrl &= ~(1<<RW_Switch);
		_delay_ms(1);
		LCD_En_Kick();
	#endif
}


void LCD_Write_String(char* data)
{
	int count = 0;
	while(*data > 0)
	{
		count++;
		LCD_Write_Char(*data++);
		if(count == 16)
		{
			LCD_GOTO_XY(2 , 0);
		}
		else if(count == 32)
		{
			LCD_Clear_Screen();
			LCD_GOTO_XY(1,0);
			count = 0;
		}
	}
}


void LCD_Custom_Character()
{
	LCD_Write_Command(64);
	LCD_Write_Char(0);
	LCD_Write_Char(14);
	LCD_Write_Char(17);
	LCD_Write_Char(2);
	LCD_Write_Char(4);
	LCD_Write_Char(4);
	LCD_Write_Char(0);
	LCD_Write_Char(4);
	LCD_Write_Command(LCD_BEGIN_AT_FIRST_ROW);
	LCD_Write_Char(0);
	_delay_ms(10);
}

