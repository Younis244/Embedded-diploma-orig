/*
 ============================================================================
 Name        : Q8-Mid.c
 Author      : Younis Tamer Hosny
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void reverse(int arr[],int n)
{
	int rev[100];
	int j=n-1;
	for(int i=0;i<n;i++,j--)
	{
		rev[j]=arr[i];
	}

	for(int i=0;i<n;i++)
	{
		printf("%d ",rev[i]);
	}

}

int main()
{
	int arr[100];
	int size;

	printf("Enter size of array: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&size);

	for(int i=0;i<size;i++)
	{
		printf("Element %d: ",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%d",&arr[i]);

	}

	printf("Before reversing: ");
	for(int i=0;i<size;i++)
	{
		printf("%d ",arr[i]);

	}

	printf("\nAfter reversing: ");
	reverse(arr,size);
	return 0;
}
