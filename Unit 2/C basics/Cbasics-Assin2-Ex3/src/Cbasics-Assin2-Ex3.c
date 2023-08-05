/*
 ============================================================================
 Name        : Cbasics-Assin2-Ex3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x,y,z;
	printf("Enter three numbers: ");
	fflush(stdin);fflush(stdout);
	scanf("%f %f %f",&x,&y,&z);

	if(x>y)
	{
		if(x>z)
			printf("Largest number= %f",x);
		else
			printf("Largest number= %f",z);
	}

	if(y>x)
	{
		if(y>z)
			printf("Largest number= %f",y);
		else
			printf("Largest number= %f",z);
	}
	return EXIT_SUCCESS;
}
