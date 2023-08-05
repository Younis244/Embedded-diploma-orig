/*
 ============================================================================
 Name        : Array-Ex1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float matrix1 [2][2];
	float matrix2 [2][2];

	float SumMatrix [2][2];


	printf("Enter the elemets of 1st matrix: \r\n");


	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("Enter a%d%d: ",i+1,j+1 );
			fflush(stdin);fflush(stdout);
			scanf("%f",&matrix1[i][j]);
		}
	}

	printf("\n");
	printf("Enter the elemets of 2nd matrix: \r\n");


	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("Enter b%d%d: ",i+1,j+1 );
			fflush(stdin);fflush(stdout);
			scanf("%f",&matrix2[i][j]);
		}
	}
	printf("\n");
	printf("Sum of Matrix: \n");

	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			SumMatrix[i][j]= matrix1[i][j]+matrix2[i][j];
		}
	}


	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("%.1f ",SumMatrix[i][j]);
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
