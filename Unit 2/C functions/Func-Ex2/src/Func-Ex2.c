/*
 ============================================================================
 Name        : Func-Ex2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int result=1;
int factorial(int number)
{
	result*=number;
	number--;
	if (number==1)
			return result;

	factorial(number);

}

int main()
{

	int n;
	printf("Enter an positive number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);


	printf("fctorial(%d)=%d ",n,factorial(n));



	return 0;
}











