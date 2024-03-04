#include "uart.h"
unsigned char string_buffer[100]="Learn-in-depth:<Younis Tamer Hosny>";
unsigned char const string_buffer2[100]="Learn-in-depth:Younis Tamer Hosny";
unsigned char string_buffer3[100]="Learn-in-depth:Shada Tamer Hosny>";
unsigned char string_buffer4[100]="Learn-in-depth:Tamer Hosny>";

void main(void)
{
	Uart_Send_string(string_buffer);
}