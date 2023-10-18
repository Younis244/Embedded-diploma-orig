/*
 ============================================================================
 Name        : Assin-Ex4.c
 Author      : Younis Tamer Hosny
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x[15];
	int* ptr=x;
	int size;

	printf("Enter size of array: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&size);

	for(int i=0;i<size;i++,ptr++)
	{
		printf("Enter element-%d: ",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%d",ptr);
	}

	ptr=&x[size-1];
	printf("The elements of array in reverse order: \r\n");

	for(int i=size;i>0;i--,ptr--)
	{
		printf("Element-%d: %d\n",i,*ptr);
	}





	return 0;
}
