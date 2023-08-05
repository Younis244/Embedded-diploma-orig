/*
 ============================================================================
 Name        : Lab6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x=0;

	for(int i=0;i<10;i++)
	{
		x=i;
		for(int j=0;j<10;j++)
		{
			printf("%d ",x);
			x++;
			if(x==10)
				break;

		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
