/*
 * main.c
 *
 *  Created on: Sep 4, 2024
 *      Author: Younis
 */
#define F_CPU							8000000UL

#include "avr/io.h"
#include "LCD_Driver/LCD.h"
#include "Keypad_Driver/Keypad.h"
#include "Utils.h"
#include "Memap.h"


//#define OUTPUT 1
//#define INPUT  0

void GPIO_Init()
{
	//LCD Data lines
	 Set_bit(DDRA,4);
	 Set_bit(DDRA,5);
	 Set_bit(DDRA,6);
	 Set_bit(DDRA,7);

	 Set_bit(DDRB,RS_Switch);//RS
	 Set_bit(DDRB,RW_Switch);//RW
	 Set_bit(DDRB,EN_Switch);//En
}




int main(void)
{
	//INIT
	GPIO_Init();
	LCD_Init();

	LCD_Write_String("Learn in Depth...");

	while(1)
	{

	}
}
