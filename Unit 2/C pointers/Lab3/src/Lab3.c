/*
 ============================================================================
 Name        : Lab3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct Sdata
{
	unsigned char data1;
	unsigned int data2;
	unsigned char data3;
	unsigned short data4;
}datta;

void print_memory_range(char* base,int size)//hena el pointer char 3ashan ye point byte by byte
{
	int i=0;
	for(i=0;i<size;i++)
	{
		printf("%p \t %x\n",base,(unsigned char)*base);//El cast 3ashan yezhrr kol byte lew7dha
				base++;
	}
}

int main()
{
	datta.data1=0x11;
	datta.data2=0xFFFFEEEE;
	datta.data3=0x22;
	datta.data4=0xABCD;
	print_memory_range(&datta,sizeof(datta));

	struct Sdata* p_datta=&datta;
	p_datta->data1=0x12;
	printf("%x\t%x",datta.data1,p_datta->data1);
//	printf("\r\n");
//	print_memory_range(&datta,sizeof(datta));


	return 0;
}
