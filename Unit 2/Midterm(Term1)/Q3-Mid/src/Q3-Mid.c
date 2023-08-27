/*
 ============================================================================
 Name        : Q3-Mid.c
 Author      : Younis Tamer Hosny
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

		if(i==1||i==2||i==3||i==5)
		{
			arr[j]=i;
			j++;
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

	printf("Enter range to know prime numbers \nn1: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&bedaya);

	printf("n2: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&nehaya);

	PrimeKnower(bedaya,nehaya);

	return 0;
}
