/*
 ============================================================================
 Name        : Lab2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int calcmin(int array[],int size)
{
	int min=array[0];
	for(int i=0;i<size;i++)
	{
		if(array[i]<min)
			min=array[i];
	}
	return min;
}

int main(void)
{
	int xvals[10]={10,15,23,47,5,99,105,30,1,11};
	int yvals[5]={1,2,-3,4,5};
	int zvals[3]={107,100,3};

	printf("The min of x , y and z is (%d,%d,%d)",calcmin(xvals,10),calcmin(yvals,5),calcmin(zvals,3));







	return EXIT_SUCCESS;
}
