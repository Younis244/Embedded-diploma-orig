/*
 ============================================================================
 Name        : Q4-Mid.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int i=0;

void reverse(int num)
{

	int rem;
	//static int new=0;
	if(num!=0)
	{
		rem=num%10;
		printf("%d",rem);
		reverse(num/10);
		//return rem;
	}


}

int main()
{
	int number;

	printf("Enter number to be reversed: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&number);
	printf("The reversed number is: ");
	reverse(number);

	return 0;
}
