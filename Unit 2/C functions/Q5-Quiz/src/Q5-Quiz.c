/*
 ============================================================================
 Name        : Q5-Quiz.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int ClearBit(int position,int num)
{
	return num&=~(1<<position);
}

int main()
{
	int number,bit;

	printf("Enter number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&number);

	printf("Enter bit position: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&bit);

	printf("Result= %d",ClearBit(bit,number));



	return 0;
}
