/*
 * main.c
 *
 *  Created on: Sep 4, 2024
 *      Author: Younis
 */

#include "avr/io.h"
#include "LCD_Driver/LCD.h"
#include "Keypad_Driver/Keypad.h"



int main(void)
{
	//Initializing
	LCD_Init();
	_delay_ms(100);
	Keypad_Init();
	//LCD_Custom_Character();

	//LCD_Write_String("Younis Tamer Hosny");

	char Pressed_Key;

	while(1)
	{
		Pressed_Key = Keypad_GetChar();
		switch(Pressed_Key)
		{
		case('?') :
			LCD_Clear_Screen();
			break;

		case('N') :
			break;

		default :
			LCD_Write_Char(Pressed_Key);
			break;
		}
	}
}
