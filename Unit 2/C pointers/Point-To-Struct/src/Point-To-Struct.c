/*
 ============================================================================
 Name        : Point-To-Struct.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct Sperson
{
	char Name[18];
	int ID;
	char Age;
	short Salary;
	double Weight;
};

int main()
{
	struct Sperson manager={"Tamer Hosny",162,30,1500,81.0};

	struct Sperson employees[]=
	{
			{"Younis Tamer",163,30,1200,91.0},
			{"Shada Tamer",164,25,1500,79.5},
			{"Abeer Mohamed",165,28,1400,65.0}
	};

	int i;
	struct Sperson* p=&manager;

	printf("manager: %s,%d,%d,%d,%lf\r\n",manager.Name,manager.ID,
			(int)manager.Age,(int)manager.Salary,manager.Weight);

	p->Salary=4000;

	printf("manager: %s,%d,%d,%d,%lf\r\n",manager.Name,manager.ID,
			(int)manager.Age,(int)manager.Salary,manager.Weight);

	p=employees;

	for(i=0;i<sizeof(employees)/sizeof(struct Sperson);i++,p++)
	{
		printf("employee %d: %s,%d,%d,%d,%lf\r\n",i+1,p->Name,
				p->ID,(int)p->Age,(int)p->Salary,p->Weight);
	}



	return 0;
}
