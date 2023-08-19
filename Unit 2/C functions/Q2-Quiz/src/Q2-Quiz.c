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
	char A[100]="Younis Tamer Hosny";
	char B[100]="Shada tamer hosny hassan";
	char C[100];

//	int k=strlen(A);
//
//	for(int i=0;i<k;i++)
//	{
//
//		C[i]=A[i];
//	}

	//printf("%s",C);

	strcpy(C,A);
	strcpy(A,B);
	strcpy(B,C);

	printf("%s",A);
	printf("\r\n");
	printf("%s",B);





	return 0;
}
