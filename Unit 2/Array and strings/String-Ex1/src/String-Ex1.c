/*
 ============================================================================
 Name        : String-Ex1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {


	char sentence[100];
	char x;
	int j=0;

	printf("Enter a string: ");
	fflush(stdin);fflush(stdout);
	gets(sentence);


	printf("\nEnter a character to find frequency: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&x);

	for(int i=0;i<100;i++)
	{
		if(x==sentence[i])
			j++;
	}




	printf("\nFrequency of %c= %d",x,j);


	return EXIT_SUCCESS;
}
