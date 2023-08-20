/*
 ============================================================================
 Name        : Q6-Quiz.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int fourthBit(int number)
{
	int k=number>>3;
	return k&1;
}

int main()
{
	int num;

	printf("Enter a number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);

	printf("The fourth bit is: %d",fourthBit(num));


	return 0;
}
