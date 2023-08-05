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

int main(void) {
	float degree[10];



	for(int i=0;i<10;i++)
	{
		printf("Enter student %d degree: ",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%f",&degree[i]);
		//printf("\n");
	}

	printf("\n");

	for(int j=0;j<10;j++)
	{
		printf("Student %d is: %.2f\n",j+1,degree[j]);
	}




	return EXIT_SUCCESS;
}
