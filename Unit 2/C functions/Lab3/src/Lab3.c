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

int findName(char names[][],int size,char name[]);

int main(void)
{
	char name[14];
	char names[5][14]={"Alaa","osama","mohamed","amina","younis"};

	puts("Enter your name: ");
	gets(name);
	if(findName(names,5,name)==1)
		puts("welcome");
	else
		puts("Goodbye");




	return EXIT_SUCCESS;
}
