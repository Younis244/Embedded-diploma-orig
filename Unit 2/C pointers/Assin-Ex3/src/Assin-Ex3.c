/*
 ============================================================================
 Name        : Assin-Ex3.c
 Author      : Younis Tamer Hosny
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
	char arr[100];
	char* ptr=arr;

	printf("Enter string to reverse: ");
	fflush(stdin);fflush(stdout);
	gets(arr);

	int x=strlen(arr)-1;
	ptr=&arr[x];

	for(int i=strlen(arr);i>0;i--,ptr--)
	{
		printf("%c",*ptr);
	}


	return 0;
}
