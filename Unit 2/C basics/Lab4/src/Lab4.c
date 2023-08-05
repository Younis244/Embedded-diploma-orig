/*
 ============================================================================
 Name        : Lab4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int sum=0;
	for(int i=1;i<100;i++)
	{
		sum+=i;
	}
	printf("The sum is: %d",sum);



	return EXIT_SUCCESS;
}
