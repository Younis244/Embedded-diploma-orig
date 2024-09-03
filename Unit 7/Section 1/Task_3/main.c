/*
 * main.c
 *
 *  Created on: Sep 2, 2024
 *      Author: Younis
 */



#define F_CPU 80000000UL

#include "util/delay.h"
#include "avr/io.h"
#include "avr/interrupt.h"
#include "Utils.h"


#define BASE			0x20
#define PORT_D			*(volatile unsigned char*)(BASE + 0x12)
#define DDRD			*(volatile unsigned char*)(BASE + 0x11)
#define PIND			*(volatile unsigned char*)(BASE + 0x10)


unsigned int i=4;
unsigned int j=4;

GPIO_init()
{
	//making pins of portD all output
	Clear_bit(DDRD,0);
	Clear_bit(DDRD,1);
	Clear_bit(DDRD,2);
	//Set_bit(DDRD,3);
	Set_bit(DDRD,4);
	Set_bit(DDRD,5);
	Set_bit(DDRD,6);
	Set_bit(DDRD,7);
	Set_bit(PORT_D,0);
	Set_bit(PORT_D,1);
	Set_bit(PORT_D,2);
}

GPIO_SET()
{
	Set_bit(PORT_D,5);
	_delay_ms(100);
	Set_bit(PORT_D,6);
	_delay_ms(100);
	Set_bit(PORT_D,7);
	_delay_ms(100);
}

GPIO_RESET()
{
	Clear_bit(PORT_D,7);
	_delay_ms(100);
	Clear_bit(PORT_D,6);
	_delay_ms(100);
	Clear_bit(PORT_D,5);
	_delay_ms(100);
}


int main(void)
{
	//Initializing pins to be output
	GPIO_init();

    while (1)
    {
    	if(Read_bit(PIND,0)==1)
    	{
    	    Clear_bit(PORT_D,j);
    	    j++;
    	    if(i>7)
    		{
    			j = 4;
    			i = 4;
    		}
    		else
    		{
    			i++;
    		}
    		Set_bit(PORT_D,i);
    		_delay_ms(100);
    	}
    	else if(Read_bit(PIND,1)==1)
    	{
    		GPIO_SET();
    		GPIO_RESET();
    	}
    	else if(Read_bit(PIND,2)==1)
    	{
    		Set_bit(PORT_D,4);
    		_delay_ms(100);
    		Clear_bit(PORT_D,4);
    	}
    	Clear_bit(PORT_D,5);
    	Clear_bit(PORT_D,6);
    	Clear_bit(PORT_D,7);
    }
}
