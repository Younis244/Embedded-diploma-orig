/*
 ============================================================================
 Name        : Func-Ex1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void PrimeKnower(int start,int end)
{
	int arr[100];
		int j=0;
		int x=0;
		for(int i=start;i<=end;i++)
		{

			if(i==2||i==3||i==5)
			{
				arr[j]=i;
				j++;
			}
			else if(i==1)
			{
				continue;
			}
			else if(i%2==0)
			{
				continue;
			}
			else if(i%3==0)
			{
				continue;
			}
			else if(i%5==0)
			{
				continue;
			}
			else
			{
				arr[j]=i;
				j++;
			}
			x=j;

		}
printf("Prime numbers betn %d and %d are: ",start,end);
		for(int k=0;k<x;k++)
		{
			printf("%d ",arr[k]);
		}
}

int main()
{
	int bedaya,nehaya;

	printf("Enter two numbers (Interval): ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&bedaya,&nehaya);

	PrimeKnower(bedaya,nehaya);

	return 0;
}
