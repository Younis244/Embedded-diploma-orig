/*
 ============================================================================
 Name        : Lab1.c
 Author      : Younis Tamer Hosny
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x=3;
	printf("%d\n",x);
	int*px=&x;
	*px=7;
	printf("%d\n",x);

	return 0;
}
