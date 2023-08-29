/*
 ============================================================================
 Name        : Assin-Ex4.c
 Author      : 
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
	float marks;
};

struct Sstudents readData()
{
	struct Sstudents X;

	printf("Enter name: ");
	fflush(stdin);fflush(stdout);
	gets(X.name);
	printf("Enter marks: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&X.marks);
	printf("\n");

	return X;
}

//void printData()
//{
//	struct Sstudents X[10];
//	for(int i=1;i<=10;i++)
//	{
//		printf("Information for roll number %d\n",i);
//		printf("Name: %s\n",X[i].name);
//		printf("Marks: %.1f\n",X[i].marks);
//	}
//}


int main()
{
	struct Sstudents Y[10];

	printf("Enter information of students: \r\n");
	for(int i=0;i<10;i++)
	{
		printf("For roll number %d\n",i+1);
		Y[i]=readData();
	}
	//Y[10]=readData();

	printf("Displaying students information: \r\n");

	for(int i=0;i<10;i++)
		{
			printf("Information for roll number %d\n",i+1);
			printf("Name: %s\n",Y[i].name);
			printf("Marks: %.1f\n",Y[i].marks);
		}
//	printData(Y);

	return 0;
}
