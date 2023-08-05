/*
 ============================================================================
 Name        : Array-Ex3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int rows;
	int columns;
	int matrix[10][10];
	int transpose[10][10];

	printf("Enter rows and columns of matrix: ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&rows,&columns);
	printf("\n");

//	int matrix[rows][columns];
//	int transpose[columns][rows];

	printf("Enter elements of matrix: \n");

	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<columns;j++)
		{

			printf("Enter elements a%d%d: ",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%d",&matrix[i][j]);
		}
	}


	printf("\nEntered Matrix: \n");

	for(int k=0;k<rows;k++)
	{
		for(int z=0;z<columns;z++)
		{
			printf("%d ",matrix[k][z]);
		}
		printf("\n\n");
	}

	printf("\nTranspose of Matrix: \n");

	for(int k=0;k<rows;k++)
		{
			for(int z=0;z<columns;z++)
			{
				transpose[z][k]=matrix[k][z];
			}

		}

	for(int k=0;k<columns;k++)
		{
			for(int z=0;z<rows;z++)
			{
				printf("%d ",transpose[k][z]);
			}
			printf("\n\n");
		}






	return EXIT_SUCCESS;
}
