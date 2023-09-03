/*
 ============================================================================
 Name        : Assin-Ex5.c
 Author      : Younis Tamer Hosny
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define pi 3.1415
#define area(r) (pi*(r)*(r))

int main()
{
	int radius;
	float area;

	printf("Enter radius of circle: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&radius);

	printf("Area of circle is: ");
	area=area(radius);
	printf("%.2f",area);



	return 0;
}
