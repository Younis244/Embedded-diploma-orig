/*
 ============================================================================
 Name        : Q1-Mid.c
 Author      : Younis Tamer Hosny
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int sum(int number)
{
	int rem;
	static int new=0;
	if(number!=0)
	{
		rem=number%10;
		new+=rem;
		sum(number/10);
	}
	else
		return 0;
	return new;
}

int main()
{
	int num;

	printf("Enter number to sum its digits: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);

	printf("The sum is: %d",sum(num));

	return 0;
}



