/*
 * LCD.c
 *
 * Created: 9/8/2024 4:13:43 PM
 * Author : Younis
 */ 

#include "avr/io.h"
#include "LCD_Driver/LCD.h"
#include "Keypad_Driver/Keypad.h"



int main()
{
	
	LCD_INIT();
	Keypad_init();
	_delay_ms(50);
	unsigned char key_pressed;
	while(1){
		key_pressed = Keypad_getkey();
		switch(key_pressed){
			case 'A':
			break;
			case '?':
			LCD_clear_screen();
			break;
			default:
			LCD_WRITE_CHAR(key_pressed);
			break;
		}
	}
}

