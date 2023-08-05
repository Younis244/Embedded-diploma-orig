/*
 ============================================================================
 Name        : Cbasics-Assin1-Ex6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b,temp;

	printf("Enter value of a: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&a);

	printf("Enter value of b: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&b);

	temp=a;
	a=b;
	b=temp;

	printf("After swapping, value of a = %d\n",a);
	printf("After swapping, value of b = %d\n",b);
	return EXIT_SUCCESS;
}
