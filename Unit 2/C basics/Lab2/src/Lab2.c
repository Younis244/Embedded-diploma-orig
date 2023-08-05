/*
 ============================================================================
 Name        : Lab2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int x,y,z;

	printf("Enter 3 numbers: ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d %d",&x,&y,&z);

	if(x>y&&x>z)
		{
		printf("The largest number is: %d",x);
		}

	else if(y>x&&y>z)
		{
		printf("The largest number is: %d",y);
		}

	else if(z>y&&z>x)
		{
		printf("The largest number is: %d",z);
		}



	return EXIT_SUCCESS;
}
