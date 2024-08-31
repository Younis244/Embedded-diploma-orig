/*
 * main.c
 *
 *  Created on: Aug 29, 2024
 *      Author: Younis
 */


/*
 * Unit6_Lesson3_asingment_Lab3.c
 *
 * Created: 8/22/2024 12:19:48 AM
 * Author : Younis
 */
#define F_CPU 80000000UL

#include <util/delay.h>
#include <avr/io.h>
#include <avr/interrupt.h>

#define Set_bit(register,bit)		register|=(1<<bit)
//#define Set_bit_hex(register,hex)	register|=(hex)
#define Toggle_bit(register,bit)	register^=(1<<bit)
//#define Clear_bit_hex(register,hex)	register&=(hex)
#define Clear_bit(register,bit)		register&=~(1<<bit)

#define BASE			0x20
#define DDRD			*(volatile unsigned char*)(BASE + 0x11)
#define PORT_D			*(volatile unsigned char*)(BASE + 0x12)
#define PORT_B			*(volatile unsigned char*)(BASE + 0x18)
#define INT_MCUCR		*(volatile unsigned char*)(BASE + 0x35)
#define INT_MCUCSR		*(volatile unsigned char*)(BASE + 0x34)
#define INT_GICR		*(volatile unsigned char*)(BASE + 0x3B)
#define INT_SREG		*(volatile unsigned char*)(BASE + 0x3F)

INT_init()
{
	//making portD->pin5,6,7 as an output
	Set_bit(DDRD,5);
	Set_bit(DDRD,6);
	Set_bit(DDRD,7);

	//making port D 2,3 input
	Clear_bit(DDRD,2);
	Clear_bit(DDRD,3);

	/*bit(3,2)--> 11 --> rising edge in INT1
	  bit(1,0)--> 01 --> Any logical change INT0*/
	Set_bit(INT_MCUCR,0);
	Clear_bit(INT_MCUCR,1);
	Set_bit(INT_MCUCR,2);
	Set_bit(INT_MCUCR,3);

	//If ISC2 is written to zero, a falling edge on INT2 activates the interrupt.
	Clear_bit(INT_MCUCSR,6);

	//General INT control register enabling INT0,1,2
	Set_bit(INT_GICR,5);
	Set_bit(INT_GICR,6);
	Set_bit(INT_GICR,7);

	//Enable all interupts
	Set_bit(INT_SREG,7);

}




int main(void)
{
	INT_init();
	Set_bit(PORT_D,5);
	Set_bit(PORT_D,6);
	Set_bit(PORT_D,7);
	//Set_bit(PORT_D,5);
    /* Replace with your application code */
    while (1);
}

ISR(INT0_vect)
{
	//making portD->pin2 as an input
	Set_bit(PORT_D,5);
	_delay_ms(100) ;
	Clear_bit(PORT_D,5);
}

ISR(INT1_vect)
{
	//making portD->pin3 as an input
	Set_bit(PORT_D,6);
	_delay_ms(100) ;
	Clear_bit(PORT_D,6);
}

ISR(INT2_vect)
{
	//making portB->pin2 as an input
	Set_bit(PORT_D,7);
	_delay_ms(100) ;
	Clear_bit(PORT_D,7);
}
