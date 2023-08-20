/*
 ============================================================================
 Name        : Q3-Quiz.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>



void reverse_array(int arr[],int rev[],int size)
{
	int j=size-1;
	for(int i=0;i<size;i++,j--)
	{
		rev[j]=arr[i];

	}

	printf("Result of reverse array is: ");

	for(int i=0;i<size;i++)
	{
		printf("%d ",rev[i]);
	}
}

int main()
{

	int array[100];
	int rev_array[100];
	int size;

	printf("Please enter the size of array: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&size);

	for(int i=0;i<size;i++)
		{
			printf("Enter element %d: ",i+1);
			fflush(stdin);fflush(stdout);
			scanf("%d",&array[i]);
		}


	reverse_array(array,rev_array,size);

	return 0;
}
