/*
 ============================================================================
 Name        : Cbasics-Assin2-Ex5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char x;

	printf("Enter a character: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&x);

	if(x<=90&&x>=65)
	{
		printf("%c is an alphabet",x);
	}

	else if(x<=122&&x>=97)
	{
		printf("%c is an alphabet",x);
	}
	else
		printf("%c is not an alphabet",x);
	return EXIT_SUCCESS;
}
