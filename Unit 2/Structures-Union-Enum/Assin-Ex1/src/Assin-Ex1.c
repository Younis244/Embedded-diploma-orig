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

struct Sstudents
{
	char name[50];
	int roll;
	float marks;
};

struct Sstudents readData()
{
	struct Sstudents C;
	printf("Enter name: ");
	fflush(stdin);fflush(stdout);
	gets(C.name);

	printf("Enter roll number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&C.roll);

	printf("Enter marks: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&C.marks);

	return C;
}

void display(struct Sstudents C)
{
	printf("name: %s\nRoll: %d\nmarks: %.2f\n",C.name,C.roll,C.marks);
}
//Younis Tamer

int main()
{
	struct Sstudents A;
	printf("Enter information of students: \r\n");
	A=readData();
	printf("\nDisplaying data: \r\n");
	display(A);

	return 0;
}
