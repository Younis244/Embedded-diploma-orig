/*
 ============================================================================
 Name        : Array-Ex5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int arr[10];
	int elements;
	int search;
	int location;

	printf("Enter no of elements: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&elements);

	for(int i=0;i<elements;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("Enter the element to be searched: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&search);

	for(int j=0;j<elements;j++)
	{
		if(arr[j]==search)
		location=j+1;
	}

	printf("Number found at locaion: %d",location);


	return EXIT_SUCCESS;
}











