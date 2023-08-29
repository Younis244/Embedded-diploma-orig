/*
 ============================================================================
 Name        : Lab1.c
 Author      : Younis Tamer Hosny
 Version     :
 Copyright   : Your copyright notice
 Description : Employee sort (struct) C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>  //dont know yet

struct SEmployee
{
	char Name[50];
	int birthDay;
	int birthMonth;
	int birthYear;
	int salary;
};



int main()
{
	struct SEmployee employees[100],tempEmployee;
	int count=0,i,j;
	char firstName[50],lastName[50];

	do
	{
		printf("Enter employee first name: ");
		fflush(stdin);fflush(stdout);
		scanf("%s",firstName);

		printf("Enter employee last name: ");
		fflush(stdin);fflush(stdout);
		scanf("%s",lastName);

		strcpy(employees[count].Name,firstName);
		strcat(employees[count].Name," ");
		strcpy(employees[count].Name,lastName);

		printf("Enter employee Birth date (day/month/year): ");
		fflush(stdin);fflush(stdout);
		scanf("%d/%d/%d",&employees[count].birthDay,&employees[count].birthMonth,&employees[count].birthYear);

		printf("Enter employee salary: ");
		fflush(stdin);fflush(stdout);
		scanf("%d",&employees[count].salary);

		count++;  if(count==100)break;

		printf("Do you want to add more (y/n)");



	}while(getch()=='y');


	for(i=0;i<count-1;i++)
	{
		for(j=i+1;j<count;j++)
		{
			if(employees[i].birthYear>employees[j].birthYear ||
			  (employees[i].birthYear==employees[j].birthYear&&
			   employees[i].birthMonth>employees[j].birthMonth)||
			  (employees[i].birthYear==employees[j].birthYear&&
			   employees[i].birthMonth==employees[j].birthMonth&&
			   employees[i].birthDay>employees[j].birthDay))
			{
				tempEmployee=employees[i];
				employees[i]=employees[j];
				employees[j]=tempEmployee;
			}
		}
	}

	for(i=0;i<count;i++)
	{
		printf("%s\t%d/%d/%d\t%d\r\n",
				employees[i].Name,
				employees[i].birthDay,
				employees[i].birthMonth,
				employees[i].birthYear,
				employees[i].salary);
	}

	return 0;
}
