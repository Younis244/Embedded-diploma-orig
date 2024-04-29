/*
 ============================================================================
 Name        : PROJECT.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "conio.h"

//Btozbott el ada2222
#define DPRINTF(...)		{fflush(stdout);\
							fflush(stdin);\
							printf(__VA_ARGS__);\
							fflush(stdout);\
							fflush(stdin);}

//Data of the student
struct SData
{
	int ID;
	char Name [20];
	float Height;
};

struct SStudent
{
	struct SData student_Info;
	struct SStudent* pNextStudent;//Ptr to next student's node
};

unsigned int count = 0;
struct SStudent* gpFirstStudent = NULL;//Global ptr for first element and init to NULL in case

//mo3zmha a3dt aboss 3ashan afhmm bas msh moshkela
void Add_Student()
	{
		struct SStudent* pNewStudent;
		struct SStudent* pLastStudent;
		char DATA [20];

		//Checking if no students @ 1st
		if(gpFirstStudent == NULL)
			{
				pNewStudent = malloc (sizeof (struct SStudent) );
				gpFirstStudent = pNewStudent;
			}
		else//If there is a student i will assign gpf to last and then loop till i reach NULL
			{
			pLastStudent = gpFirstStudent;

			while(pLastStudent->pNextStudent)
				pLastStudent = pLastStudent->pNextStudent;


			pNewStudent = malloc (sizeof (struct SStudent) );
			pLastStudent->pNextStudent = pNewStudent;
			}



		DPRINTF("Student's ID: ");
		gets (DATA);
		pNewStudent->student_Info.ID = atoi (DATA);
		DPRINTF("Student's name: ");
		gets (pNewStudent->student_Info.Name);
//		pNewStudent->student_Info.Name = DATA;
		DPRINTF("Student's height: ");
		gets (DATA);
		pNewStudent->student_Info.Height = atof (DATA);
		count ++;
		DPRINTF("====================\n");
	}

int Delete_Student()
	{
		if(gpFirstStudent == NULL)
			DPRINTF("The list is empty...\n");
		unsigned int selected_ID;
//		struct SStudent* pSelected = gpFirstStudent;
//		struct SStudent* pPrevious = NULL;
		char DATA [20];
		DPRINTF("Enter ID to be deleted: ");
		gets (DATA);

		selected_ID = atoi (DATA);


		//Check if list empty
		if(gpFirstStudent)
			{
					struct SStudent* pSelected = gpFirstStudent;
					struct SStudent* pPrevious = NULL;

					if(gpFirstStudent->student_Info.ID == selected_ID)
						{
							gpFirstStudent = gpFirstStudent->pNextStudent;
							DPRINTF("%s is deleted from the list",pSelected->student_Info.Name);
							free (pSelected);
							count--;
							return 1;
						}
					else
						{
						int i;
							for(i=1 ; i<=count ; i++)
								{
									if(pSelected->student_Info.ID == selected_ID)
										{
											pPrevious->pNextStudent = pSelected->pNextStudent;
											DPRINTF("%s is deleted from the list",pSelected->student_Info.Name);
											free (pSelected);
											count--;
											if(count == 0)
												gpFirstStudent = NULL;
											return 1;

										}
											pPrevious = pSelected;
											pSelected = pSelected->pNextStudent;
								}
						}
			}

				DPRINTF("ID not found,Check again...\n");
				return 0;

	}

void View_the_list()
	{
		struct SStudent* pCurrentStudent = gpFirstStudent;
		//struct SStudent* pnext;

		if(gpFirstStudent == NULL)
			{
				DPRINTF("The list is empty...\n");
			}
		else
			{
				int i;
				for(i=1 ; i<=count ; i++)
					{
						DPRINTF("\nStudent number %d: ",i);
						DPRINTF("\n\tID: %d",pCurrentStudent->student_Info.ID);
						DPRINTF("\n\tName: %s",pCurrentStudent->student_Info.Name);
						DPRINTF("\n\tHeight: %.1f\n",pCurrentStudent->student_Info.Height);
						pCurrentStudent = pCurrentStudent->pNextStudent;
					}
			}
	}

void Delete_All()
	{
		struct SStudent* Student_To_Delete = gpFirstStudent;
		int i;
		if(gpFirstStudent == NULL)
			{
				DPRINTF("The list is already empty...\n");
			}
		else
			{
				for(i=1 ; i<=count ; i++)
					{
						gpFirstStudent = gpFirstStudent->pNextStudent;
						free (Student_To_Delete);
						Student_To_Delete = gpFirstStudent;
					}
				gpFirstStudent = NULL;
				DPRINTF("List is deleted...\n");
				count = 0;
			}
	}




void Number_Of_List()
	{
		DPRINTF("The number of the list is: %d",count);
	}

int Find_Student_by_ID()
	{
		unsigned int ID_to_search;
		char DATA [20];
		DPRINTF("\nInsert ID to search: ");
		gets (DATA);
		ID_to_search = atoi (DATA);

		if(gpFirstStudent == NULL)
			DPRINTF("The list is empty...\n");

		if(gpFirstStudent)
			{
				int i;
				struct SStudent* pStudent_to_view=gpFirstStudent;
				for(i=1;i<=count;i++)
					{
						if(pStudent_to_view->student_Info.ID == ID_to_search)
							{
								DPRINTF("\nStudent ID: %d",pStudent_to_view->student_Info.ID);
								DPRINTF("\nStudent Name: %s",pStudent_to_view->student_Info.Name);
								DPRINTF("\nStudent Height: %.1f",pStudent_to_view->student_Info.Height);
								return 1;
							}
						else
							{
								pStudent_to_view = pStudent_to_view->pNextStudent;
							}
					}
			}
		DPRINTF("ID is not found Check again...\n");
		return 0;
	}


void Find_Middle_of_list()
	{
		int x=(count/2)+1;
		int i;
		struct SStudent* pMiddle=gpFirstStudent;
		DPRINTF("\nThe middle of the list is: %d",x);

		for(i=1 ; i<=count ; i++)
			{
				if(x == i)
					{
						DPRINTF("\nThe middle student's ID: %d",pMiddle->student_Info.ID);
						DPRINTF("\nThe middle student's Name: %s",pMiddle->student_Info.Name);
						DPRINTF("\nThe middle student's Heght: %.1f",pMiddle->student_Info.Height);
					}
				else
					{
						pMiddle = pMiddle->pNextStudent;
					}
			}
	}



int main()
	{
		char selection [20];

		do
		{
			DPRINTF("\n====================\n");
			DPRINTF("Choose from the following options\n");
			DPRINTF("\t\n1)Add student");
			DPRINTF("\t\n2)Delete student");
			DPRINTF("\t\n3)View the list");
			DPRINTF("\t\n4)Delete all the list");
			DPRINTF("\t\n5)Find student by ID");
			DPRINTF("\t\n6)How many students in the list");
			DPRINTF("\t\n7)Find middle of the list");
			DPRINTF("\t\n8)To quit");
			DPRINTF("\t\nChoose an option: ");
			gets (selection);
			DPRINTF("\n====================\n")




			if(atoi (selection) == 1)
				{
					Add_Student();
				}
			else if(atoi (selection) == 2)
				{
					Delete_Student();
				}
			else if(atoi (selection) == 3)
				{
					View_the_list();
				}
			else if(atoi (selection) == 4)
				{
					Delete_All();
				}
			else if(atoi (selection) == 5)
				{
					Find_Student_by_ID();
				}
			else if(atoi (selection) == 6)
				{
					Number_Of_List();
				}
			else if(atoi (selection) == 7)
				{
				Find_Middle_of_list();
				}
			else
				{
					printf("\nWrong option please try again...\n");
				}


		}while(atoi (selection) !=8);
	}





















