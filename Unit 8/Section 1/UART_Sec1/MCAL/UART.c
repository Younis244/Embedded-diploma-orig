/*
 * UART.c
 *
 *  Created on: Nov 26, 2024
 *      Author: Younis
 */


#include "UART.h"
#include "string.h"





/**================================================================
 * @Fn			-UART_Init
 * @brief 		-Initializes the GPIOx Piny peripheral according to the specified parameters in PinConfig
 * @param [in] 	-None
 * @returnval 	-None
 *
 */
void UART_Init(void)
{
	//BAUDrate
	UBRRL = 51; //Baudrate = 9600
	Clear_bit(UCSRA , 1); //Normal mode
	//Frame

	//No parity
	//8 Bit data is initial value but as to make sure
	Set_bit(UCSRC , 1);
	Set_bit(UCSRC , 2);
	Clear_bit(UCSRB , 2);

	//Enable Peripheral
	Set_bit(UCSRB , 3);//Bit 3 – TXEN: Transmitter Enable
	Set_bit(UCSRB , 4);//Bit 4 – RXEN: Receiver Enable

	//Initialized by default
	Set_bit(UCSRC , 7);//Bit 7 – URSEL: Register Select
	Clear_bit(UCSRC , 6);//This bit selects between Asynchronous and Synchronous mode of operation and for Asynch put 0
}

void UART_Send(uint8_t data)
{
	while (!Read_bit(UCSRA , 5));//Bit 5 – UDRE: USART Data Register Empty
	UDR = data;
}

uint8_t UART_Receive(void)
{
	while(!Read_bit(UCSRA , 7));//Bit 7 – RXC: USART Receive Complete
	return UDR;
}


void UART_SendNumberU32(uint32_t number)
{
//	UART_Send((uint8_t)number);
//	UART_Send((uint8_t)(number>>8));//b3ml shifting
//	UART_Send((uint8_t)(number>>16));
//	UART_Send((uint8_t)(number>>24));

	uint8_t* ptr = &number;
	UART_Send(*ptr++);
	UART_Send(*ptr++);
	UART_Send(*ptr++);
	UART_Send(*ptr);
}


uint32_t UART_RecieveNumberU32(void)
{
//	uint8_t b1 = UART_Receive();
//	uint8_t b2 = UART_Receive();
//	uint8_t b3 = UART_Receive();
//	uint8_t b4 = UART_Receive();
//	uint32_t number = 0;
//	number = b1|(uint32_t)b2<<8|(uint32_t)b2<<16|(uint32_t)b3<<24;

	uint32_t number;
	uint8_t* ptr = &number;
	ptr[0] = UART_Receive();
	ptr[1] = UART_Receive();
	ptr[2] = UART_Receive();
	ptr[3] = UART_Receive();

	return number;
}


void UART_SendString(uint8_t* string)
{

	while(*string)
	{
		UART_Send(*string);
		string++;
	}
}


void UART_RecieveString(uint8_t* character)
{

	while(1)
	{
		*character = UART_Receive();
		if(*character == '\0')
			break;
		else
		{
			LCD_Write_Char(*character);
			if(*character == '.')//For next line
				LCD_GOTO_XY(2,0);
			character++;
		}

	}
}



















