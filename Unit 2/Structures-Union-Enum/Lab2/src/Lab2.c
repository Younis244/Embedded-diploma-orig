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

struct Scomplex
{
	double m_R;//Real part
	double m_I;//Imaginary part
};

struct Scomplex ReadComplex(char name[])
{
	struct Scomplex C;
	printf("Enter %s Complex value (Ex: 5,-3): ",name);
	fflush(stdin);fflush(stdout);
	scanf("%lf,%lf",&C.m_R,&C.m_I);

	return C;
}

struct Scomplex AddComplex(struct Scomplex A,struct Scomplex B)
{
	struct Scomplex C;
	C.m_R=A.m_R+B.m_R;
	C.m_I=A.m_I+B.m_I;

	return C;
}

void PrintComplex(char name[],struct Scomplex C)
{
	printf("%s= (%.3lf)+j(%.3lf)\r\n",name,C.m_R,C.m_I);
}

int main()
{
	struct Scomplex X,Y,Z;

	X=ReadComplex("X");
	Y=ReadComplex("Y");
	Z=AddComplex(X,Y);
	PrintComplex("Z",Z);


	return 0;
}
