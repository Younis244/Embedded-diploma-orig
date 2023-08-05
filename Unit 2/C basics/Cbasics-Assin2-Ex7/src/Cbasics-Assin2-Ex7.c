/*
 ============================================================================
 Name        : Cbasics-Assin2-Ex7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x,factorial=1;

	printf("Enter an integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);

	if(x<0)
	{
		printf("Factorial doenst exist");
	}
	else if(x==0||x==1)
	{
		printf("Factorial = 1");
	}
	else if(x>1)
	{
		for(int i=1;i<x;i++)
		{
			factorial*=i;
		}
		printf("Factorial= %d",factorial);
	}
	return EXIT_SUCCESS;
}
