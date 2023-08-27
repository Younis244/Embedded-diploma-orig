/*
 ============================================================================
 Name        : Q7-Mid.c
 Author      : Younis Tamer Hosny
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

	printf("The sum of 1 to 100 is: %d",sumOfHundred(100));

	return 0;
}
