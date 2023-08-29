/*
 ============================================================================
 Name        : Assin-Ex2.c
 Author      : Younis Tamer Hosny
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct infoDist
{
	int feet;
	float inch;
};

struct infoDist ReadData()
{
	struct infoDist C;

	printf("Enter feet: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&C.feet);

	printf("Enter inch: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&C.inch);

	return C;
}

struct infoDist Add(struct infoDist A,struct infoDist B)
{
	struct infoDist sum;
	sum.feet=A.feet+B.feet;
	sum.inch=A.inch+B.inch;
	//As 12 inch=1 feet
	if(sum.inch>12)
	{
		sum.inch-=12;
		++sum.feet;
	}

	return sum;
}

int main()
{
	struct infoDist X,Y,Z;

	printf("Enter information for 1st distance: \n");
	X=ReadData();
	printf("\nEnter information for 2nd distance: \n");
	Y=ReadData();

	Z=Add(X,Y);
	printf("Sum of distances= %d\'-%.1f\'",Z.feet,Z.inch);


	return 0;
}
