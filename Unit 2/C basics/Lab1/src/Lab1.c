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
	float pi=22/7.0;
	char choice;
	float radius=0;
	float circum;
	float area;
	printf("Enter the radius you want: \r\n");
	fflush(stdin);fflush(stdout);
	scanf("%f",&radius);
	printf("Choose what do you want to calculate (A/a)for area or (C/c)for circum\r\n");
	fflush(stdin);fflush(stdout);
	scanf("%c",&choice);

	if(choice=='A'||choice=='a')
	{
		area= pi*radius*radius;
		printf("The area is: %f\r\n",area);
	}

	else if(choice=='C'||choice=='c')
	{
		circum=2*pi*radius;
		printf("The circum is: %f\r\n",circum);

	}

	else
		printf("Wrong choice");

	return EXIT_SUCCESS;

}
