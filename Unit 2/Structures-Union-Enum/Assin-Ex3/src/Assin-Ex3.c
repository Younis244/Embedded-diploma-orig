/*
 ============================================================================
 Name        : Assin-Ex3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct Scomplex
{
	float Real;
	float Imag;
};

struct Scomplex ReadData()
{
	struct Scomplex A;
	printf("Enter real and imaginary respectively: ");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&A.Real,&A.Imag);
	return A;
}

struct Scomplex Add(struct Scomplex B,struct Scomplex C)
{
	struct Scomplex A;
	A.Real=B.Real+C.Real;
	A.Imag=B.Imag+C.Imag;

	return A;
}

void printComplex(struct Scomplex sum)
{
	printf("Sum=%.1f+%.1fi",sum.Real,sum.Imag);
}

int main()

{
	struct Scomplex X,Y,Z;
	printf("For 1st complex number: \r\n");
	X=ReadData();
	printf("For 2nd complex number: \r\n");
	Y=ReadData();

	Z=Add(X,Y);
	printComplex(Z);



	return 0;
}
