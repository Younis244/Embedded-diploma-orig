/*
 * main.c
 *
 *  Created on: Apr 17, 2024
 *      Author: Younis
 */

#include "stdio.h"
#include "stdlib.h"// le malloc
#include "string.h"//3ashan el asamy
#include "conio.h"


//Btozbott el ada2222
#define DPRINTF(...)		{fflush(stdout);\
							fflush(stdin);\
							printf(__VA_ARGS__);\
							fflush(stdout);\
							fflush(stdin);}



struct Sdata
	{
		int ID;
		char Name [20];
		float Height;
	};

struct SStudent
	{
		struct Sdata student;
		struct SStudent* pNextStudent;
	};


struct SStudent* gpFirstStudent = NULL;


void Add_Student ()
	{
		struct SStudent* pNewStudent;
		struct SStudent* pLastStudent;
		char Text [20];

		//Check if list is empty
		//yes
		if(gpFirstStudent == NULL)
			{
				//Create new record
				pNewStudent = malloc (sizeof (struct SStudent) );
				//assign it to gpFirstStudent
				gpFirstStudent = pNewStudent;
			}
		else
			{
				//Navigate until i reach the last element that its node have (((NULL)))
				pLastStudent = gpFirstStudent;
				while (pLastStudent->pNextStudent)//hnfdl fe el loop de le7d ma ywsl le NULL fa false fa yetl3
					pLastStudent = pLastStudent->pNextStudent;

				//Create new record
				pNewStudent = (struct SStudent*) malloc ( sizeof (struct SStudent) );
				pLastStudent->pNextStudent = pNewStudent;//3mllt assign ba2a en a5er element howa el new delwa2ti
			}

		//Fill new record
		DPRINTF("\nEnter student ID: ");
		gets (Text);
		pNewStudent->student.ID = atoi (Text); //from string to int

		DPRINTF("\nEnter student Full Name: "); //from string to float
		gets (pNewStudent->student.Name);

		DPRINTF("\nEnter students Height: ");
		gets (Text);
		pNewStudent->student.Height = atof (Text);

		//Set the next ptr to null (New student)
		pNewStudent->pNextStudent = NULL; //En el new student 3mltlo ba2a assign howa lel NULL
	}



int delete_Student ()
	{
		unsigned int selected_id;//3ashan a5lly el region kolo +ve
		char TEXT [20];
		//get the selected id
		DPRINTF("\nEnter the student ID to be deleted: ");
		gets (TEXT);
		selected_id = atoi (TEXT);

		//List is not empty
		if(gpFirstStudent)
			{
			struct SStudent* pSelectedStudent = gpFirstStudent;
			struct SStudent* pPrevStudet = NULL;

				//Loop on all the record
				while (pSelectedStudent)//Loop le7d ma yegy lel null
					{
						//Compare each node with the selected node
						if(pSelectedStudent->student.ID == selected_id)
							{
								if(pPrevStudet)//The first is not the selected line
									{
										pPrevStudet->pNextStudent = pSelectedStudent->pNextStudent;
									}
								else//1st student == ID
									{
										gpFirstStudent = pSelectedStudent->pNextStudent;
									}
								free (pSelectedStudent);
								return 1;
							}
						pPrevStudet = pSelectedStudent;
						pSelectedStudent = pSelectedStudent->pNextStudent;//b5leeh eno yeshawr 3ala ely ba3deeh ba2a
					}
			}
		DPRINTF("\nCannot find the entered ID");
		return 0;
	}


void View_Students ()
	{
		struct SStudent* pCurrentStudent = gpFirstStudent;
		int count = 0;

		if(gpFirstStudent == NULL)
			{
				DPRINTF("\nEmpty List");
			}
		else
			{
				while(pCurrentStudent)
					{
						DPRINTF("\nRecord number: %d",count+1);
						DPRINTF("\n\tID: %d",pCurrentStudent->student.ID);
						DPRINTF("\n\tName: %s",pCurrentStudent->student.Name);
						DPRINTF("\n\tHeight: %f",pCurrentStudent->student.Height);
						pCurrentStudent = pCurrentStudent->pNextStudent;
						count++;
					}
			}
	}

void Delete_All ()
	{
		struct SStudent* pCurrentStudent = gpFirstStudent;
		int count = 0;

		if(gpFirstStudent == NULL)
			{
				DPRINTF("Empty List");
			}
		else
			{
				while(pCurrentStudent)
					{
						struct SStudent* pTempStudent = pCurrentStudent;
						pCurrentStudent = pCurrentStudent->pNextStudent;
						free (pTempStudent);
					}
				gpFirstStudent = NULL;
			}
	}

//int Quit ()
//{
//	do
//	{
//
//	}while (1);
//	return 0;
//}




void main()
	{
	char TEXT [20];

	while (1)
		{
			DPRINTF("\n====================");
			DPRINTF("\n\t Choose on the following options\n");
			DPRINTF("\n1: Add Student");
			DPRINTF("\n2: Delete Student");
			DPRINTF("\n3: View Students");
			DPRINTF("\n4: Delete All");
			DPRINTF("\n5: Quit");

			DPRINTF("\nEnter option number: ");
			gets (TEXT);
			DPRINTF("\n====================");

			switch (atoi (TEXT))
			{
			case 1:
				Add_Student();
				break;
			case 2:
				delete_Student ();
				break;
			case 3:
				View_Students ();
				break;
			case 4:
				Delete_All ();
				break;
			default:
				DPRINTF("\nWrong option");
				break;
			}
		}
	}
