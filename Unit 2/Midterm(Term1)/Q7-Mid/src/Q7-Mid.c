/*
 ============================================================================
 Name        : Q7-Mid.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int sumOfHundred(int number)
{
	if(number!=0)
		return number+sumOfHundred(number-1);

}
int main()
{

	printf("%d",sumOfHundred(100));

	return 0;
}