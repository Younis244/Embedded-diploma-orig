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

struct Sperson
{
	char name [50];
	int id;
};

int main()
{
	struct Sperson Clients[]=
	{
			{"Younis Tamer",1000},
			{"Mohamed morsy",1001},
			{"Marwan el masry",1002}
	};

	struct Sperson* ptr=&Clients;

	printf("Clients data: \r\n");
	for(int i=0;i<sizeof(Clients)/sizeof(struct Sperson);i++,ptr++)
	{
		printf("Name: %s\nID: %d\r\n",ptr->name,ptr->id);
	}



	return 0;
}
