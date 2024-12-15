/*
 * Memap.h
 *
 *  Created on: Dec 14, 2024
 *      Author: Younis
 */

#ifndef MEMAP_H_
#define MEMAP_H_


#define BASE							0x20


#define	PORTA				(*(volatile unsigned char*)(BASE + 0x1B))
#define	DDRA				(*(volatile unsigned char*)(BASE + 0x1A))
#define	PINA				(*(volatile unsigned char*)(BASE + 0x19))

#define	PORTB				(*(volatile unsigned char*)(BASE + 0x18))
#define	DDRB				(*(volatile unsigned char*)(BASE + 0x17))
#define	PINB				(*(volatile unsigned char*)(BASE + 0x16))

#define	PORTC				(*(volatile unsigned char*)(BASE + 0x15))
#define	DDRC				(*(volatile unsigned char*)(BASE + 0x14))
#define	PINC				(*(volatile unsigned char*)(BASE + 0x13))

#define	PORTD				(*(volatile unsigned char*)(BASE + 0x12))
#define	DDRD				(*(volatile unsigned char*)(BASE + 0x11))
#define	PIND				(*(volatile unsigned char*)(BASE + 0x10))




#endif /* MEMAP_H_ */
