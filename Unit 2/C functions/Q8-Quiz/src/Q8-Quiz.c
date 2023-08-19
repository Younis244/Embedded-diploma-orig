/*
 ============================================================================
 Name        : Q8-Quiz.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void Search()
{
	int size;
	int occur;
	int compare[100];
	int arr[100];
	int location=-1;
	int limit=1;

	printf("Enter size of array:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&size);

	for(int i=0;i<size;i++)
	{
		printf("Enter element %d: ",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%d",&arr[i]);
	}

	printf("Enter number to search for its last occurence: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&occur);

	compare[0]=occur;

	for(int s=0;s<size;s++)
	{
		if(occur==arr[s])
		{
			for(int j=0;j<size;j++)
			{
				if(compare[0]==arr[j])
					location=j+1;
				else
					continue;
			}
		}

	}

	printf("Last occurence is: %d",location);
}

int main()
{

	Search();




	return 0;
}
