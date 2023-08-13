/*
 ============================================================================
 Name        : Lab1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//int factorial(int x);


int factorial (int x)
{
	int product=1;
	if(x>0)
	{
		for(int i=x;i>1;i--)
		{
			product*=i;

		}
		return product;
	}
	else if(x==0||x==1)
	{
		product=1;
		return product;
	}
	else
		printf("Wrong input");
	//return product;
}

int main(void) {

	int y=factorial(3);
	printf("%d",y);

	//printf("Factorial(%d)= %d\r\n",3,factorial(3));



	return EXIT_SUCCESS;
}
