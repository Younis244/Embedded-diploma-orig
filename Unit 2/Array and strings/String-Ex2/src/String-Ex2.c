/*
 ============================================================================
 Name        : String-Ex2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{

	char sentence[100];
	int i=0;

	printf("Enter a string: ");
	fflush(stdin);fflush(stdout);
	gets(sentence);

//	printf("%d",strlen(sentence));

	for(i=0;i<100;i++)
	{
		if(sentence[i]==0)
			break;
	}

	printf("Length of string: %d",i);


	return EXIT_SUCCESS;
}
