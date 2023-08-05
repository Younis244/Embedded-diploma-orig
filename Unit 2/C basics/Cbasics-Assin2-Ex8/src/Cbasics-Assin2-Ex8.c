/*
 ============================================================================
 Name        : Cbasics-Assin2-Ex8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x,y;
	char z;

	printf("Enter operator either - or + or * or /: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&z);
	if(z=='+')
	{
		printf("Enter two operands: ");
		fflush(stdin);fflush(stdout);
		scanf("%f %f",&x,&y);
		float sum=x+y;
		printf("%f + %f= %f",x,y,sum);
	}
	else if(z=='-')
	{
		printf("Enter two operands: ");
		fflush(stdin);fflush(stdout);
		scanf("%f %f",&x,&y);
		float diff =x-y;
		printf("%f - %f= %f",x,y,diff);
	}

	else if(z=='*')
	{
		printf("Enter two operands: ");
		fflush(stdin);fflush(stdout);
		scanf("%f %f",&x,&y);
		float product =x*y;
		printf("%f * %f= %f",x,y,product);
	}
	else if(z=='/')
	{
		printf("Enter two operands: ");
		fflush(stdin);fflush(stdout);
		scanf("%f %f",&x,&y);
		float division =x/y;
		printf("%f / %f= %f",x,y,division);
	}
	else
		printf("Wrong choice");
	return EXIT_SUCCESS;
}
