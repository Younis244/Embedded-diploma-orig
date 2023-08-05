/*
 ============================================================================
 Name        : Array-Ex2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n;
	float numbers;
	float sum;



	printf("Enter the numbers of data: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);


	for(int i=1;i<=n;i++)
	{
		printf("%d. Enter number: ",i);
		fflush(stdin);fflush(stdout);
		scanf("%f",&numbers);
		sum+=numbers;
	}


	printf("Average= %.2f",sum/n);


	return EXIT_SUCCESS;
}
