/*
 ============================================================================
 Name        : Array-Ex4.c
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
	int inserted;
	int location;

	printf("Enter no of elements: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&elements);

	for(int i=0;i<elements;i++)
	{
		scanf("%d",&arr[i]);

	}


	//	for(int i=0;i<elements;i++)
	//	{
	//		printf("%d ",arr[i]);
	//	}

	printf("Enter the element to be inserted: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&inserted);

	printf("Enter the location: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&location);


	for(int i=elements;i>0;i--)
	{

		if(i==location-1)
			arr[i]=inserted;
		if(i<location)
			continue;
		arr[i]=arr[i-1];
	}

		for(int i=0;i<elements+1;i++)
			{
				printf("%d ",arr[i]);
			}




	return EXIT_SUCCESS;
}
