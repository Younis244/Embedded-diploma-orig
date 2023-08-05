/*
 ============================================================================
 Name        : Lab3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float x[3][3];
	float y[3][3];
	int i;
	int j;

	for(i=0;i<3;i++)
	{

		for(j=0;j<3;j++)
		{
			printf("Enter the item(%d,%d): ",i,j);
			fflush(stdin);fflush(stdout);
			scanf("%f",&x[i][j]);

		}
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			y[j][i]=x[i][j];
		}
	}

	printf("The matrix is: \r\n");
	for(int k=0;k<3;k++)
	{
		for(int z=0;z<3;z++)
		{
			printf("%.2f ",x[k][z]);
		}
		printf("\n");
	}


	printf("The transpose is: \r\n");
		for(int k=0;k<3;k++)
		{
			for(int z=0;z<3;z++)
			{
				printf("%.2f ",y[k][z]);
			}
			printf("\n");
		}










	return EXIT_SUCCESS;
}
