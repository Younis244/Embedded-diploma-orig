/*
 ============================================================================
 Name        : Assin-Ex1.c
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
	int m=29;

	printf("Addres of m: %p",&m);
	printf("\nValue of m: %d",m);

	int* ab=&m;
	printf("\r\nNow ab is assigned with the address of m.");
	printf("\nAddress of pointer ab: %p",ab);
	printf("\nContent of pointer ab: %d",*ab);

	m=34;
	printf("\r\nThe value of m is assigned to 34 now.");
	printf("\nAddress of pointer ab: %p",ab);
	printf("\nContent of pointer ab: %d",*ab);

	*ab=7;
	printf("\r\nThe pointer variable ab is assigned with the val 7 now.");
	printf("\nAddres of m: %p",&m);
	printf("\nValue of m: %d",m);





	return 0;
}
