/*
 ============================================================================
 Name        : String-Ex3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	char sentence[100];
	char temp;
	int i,j;

	printf("Enter the string: ");
	fflush(stdin);fflush(stdout);
	gets(sentence);

	i=0;
	j=strlen(sentence)-1;

			while(i<j)
			{
				temp=sentence[i];
				sentence[i]=sentence[j];
				sentence[j]=temp;
				i++;
				j--;
			}
	printf("Reverse string is: %s",sentence);





	return EXIT_SUCCESS;
}
