/*
 ============================================================================
 Name        : Q2-Mid.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float squareRoot(int number)
{
	return sqrt(number);
}

int main()
{
	int num=0;

	printf("Enter number to get its square root: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);

	printf("The square root of %d is: %.3f",num,squareRoot(num));

	return 0;
}
