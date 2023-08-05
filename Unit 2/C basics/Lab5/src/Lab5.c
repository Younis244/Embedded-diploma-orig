/*
 ============================================================================
 Name        : Lab5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int number=0;
	float degree,average;

	printf("Enter the number of students: ",number);
	fflush(stdin);fflush(stdout);
	scanf("%d",&number);

	for(int i=0;i<number;i++)
	{
		printf("Enter student (%d) degree: ",i );
		fflush(stdin);fflush(stdout);
		scanf("%f",&degree);
		average+=degree;

	}
	printf("Average students degree is: %f\r\n",average/number);

	return EXIT_SUCCESS;
}
