/*
 ============================================================================
 Name        : Lab2.c
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
	int x[5];
	int sum=0;
	int* px=x;

	for(int i=0;i<sizeof(x)/sizeof(int);i++)
		scanf("%d\n",px+i);

	for(int i=0;i<sizeof(x)/sizeof(int);i++)
			printf("%d\n",*px++);

	px=x;

	for(int i=0;i<sizeof(x)/sizeof(int);i++,px++)
		sum+=*px;

	printf("sum= %d\n",sum);


	return 0;
}
