/*
 ============================================================================
 Name        : Q2-Quiz.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	/* If strings
	char A[100]="Younis Tamer Hosny";
	char B[100]="Shada tamer hosny hassan";
	char C[100];



	strcpy(C,A);
	strcpy(A,B);
	strcpy(B,C);

	printf("%s",A);
	printf("\r\n");
	printf("%s",B);
	 */


	int x[100];
	int y[100];
	int z[100];

	printf("Enter first array: ");
	fflush(stdin);fflush(stdout);

	for(int i=0;i<10;i++)
	{
		scanf("%d",&x[i]);
	}

	printf("\nEnter second array: ");
	fflush(stdin);fflush(stdout);

	for(int i=0;i<5;i++)
	{
		scanf("%d",&y[i]);
	}

	printf("Arrays before swapping:\nFirst array-->");
	for(int i=0;i<10;i++)
	{
		printf("%d  ",x[i]);
	}

	printf("\nSecond array-->");

	for(int i=0;i<5;i++)
	{
		printf("%d  ",y[i]);
	}

	for(int j=0;j<10;j++)
	{
		z[j]=x[j];
		x[j]=y[j];
		y[j]=z[j];
	}

	printf("\r\nArrays after swapping:\nFirst array-->");
	for(int i=0;i<5;i++)
	{
		printf("%d  ",x[i]);
	}

	printf("\nSecond array-->");

	for(int i=0;i<10;i++)
	{
		printf("%d  ",y[i]);
	}







	return 0;
}
