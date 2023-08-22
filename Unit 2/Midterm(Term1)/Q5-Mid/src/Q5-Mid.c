/*
 ============================================================================
 Name        : Q5-Mid.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void Ones(int number)
{
	int i;
	int j=0;
	int k;
	for(i=5;i>=0;i--)
	{
		k=number>>i;
		if(k&1)
			j++;
		else
			continue;
	}
	printf("%d",j);
}

int main()
{
	int num;

	printf("Enter number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);

	Ones(num);


	return 0;
}
