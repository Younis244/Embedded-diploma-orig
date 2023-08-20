/*
 ============================================================================
 Name        : Q1-Quiz.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
	char name[100];
	char anotherName[100];

	printf("Enter Name: ");
	fflush(stdin);fflush(stdout);
	gets(name);

	printf("Enter another Name: ");
	fflush(stdin);fflush(stdout);
	gets(anotherName);

	if(stricmp(name,anotherName)==0)
		printf("Identical");
	else
		printf("Different");


	return 0;
}
