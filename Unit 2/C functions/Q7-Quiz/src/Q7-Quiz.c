/*
 ============================================================================
 Name        : Q7-Quiz.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>



void PowerOfThree(int num)
{
	int number=3;
	int product=1;
	for(int i=0;i<100;i++)
	{
		product*=number;
		if(num==product)
		{
			printf("%d",0);
			break;
		}
		else if(num>product)
		{
			continue;
		}
		else if(num<product)
		{
			printf("%d",1);
			break;
		}


	}
}

int main()
{
	int search;

	printf("Enter number to search: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&search);

	PowerOfThree(search);






	return 0;
}
