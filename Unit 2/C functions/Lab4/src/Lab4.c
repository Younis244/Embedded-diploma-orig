/*
 ============================================================================
 Name        : Lab4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void printSeq(int size)
{
	int x=0;
		for(int i=0;i<size;i++)
		{
			x=i;
			for(int j=0;j<size;j++)
			{

				printf("%d ",x);
				x++;
				if(x==size)
					break;

			}
			printf("\n");

		}
}

int main(void)
{
	printSeq(15);



	return EXIT_SUCCESS;
}
