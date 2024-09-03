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
#define DDRD			*(volatile unsigned char*)(BASE + 0x11)
#define PORT_D			*(volatile unsigned char*)(BASE + 0x12)
#define PORT_C			*(volatile unsigned char*)(BASE + 0x15)
#define DDRC			*(volatile unsigned char*)(BASE + 0x14)
#define PINC			*(volatile unsigned char*)(BASE + 0x13)
#define PORT_A			*(volatile unsigned char*)(BASE + 0x1B)
#define DDRA			*(volatile unsigned char*)(BASE + 0x1A)

unsigned int i=-1;
unsigned int j=-1;

GPIO_init()
{
	//making pins of portD all output
	Set_bit(DDRA,0);
	Set_bit(DDRA,1);
	Set_bit(DDRA,2);
	Set_bit(DDRA,3);
	Set_bit(DDRA,4);
	Set_bit(DDRA,5);
	Set_bit(DDRA,6);
	Set_bit(DDRA,7);
	Clear_bit(DDRC,0);
	Set_bit(PORT_C,0);

}


int main(void)
{
	//Initializing pins to be output
	GPIO_init();

    while (1)
    {
    	if(Read_bit(PINC,0)==0)
    	{
    		Clear_bit(PORT_A,j);
    		j++;
			if(i>7)
			{
				j = 0;
				i = 0;
			}
			else
			{
				i++;
			}
			Set_bit(PORT_A,i);
			_delay_ms(100);
    	}
    }
}
