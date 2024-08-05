/*
 * main.c
 *
 *  Created on: Jun 22, 2024
 *      Author: Younis
 */

#include "Student_Management_System.h"

//#define width 50
//uint32_t buffer[width];
FIFO_Buffer students_data;
extern student StudentsFifo [FIFO_MAX_SIZE] ;
//student* Ptr_student;
void main()
	{
		char selection [20];

		if(init(&students_data , &StudentsFifo , FIFO_MAX_SIZE) == FIFO_NO_ERROR)
		DPRINTF("\n\tInit is done....\n");
		DPRINTF("\n====================\n");
		DPRINTF("\nWelcome to the student management system\n");

		do
		{
			DPRINTF("\n===========================\n");
			DPRINTF("Choose the task that you want to perform\n");
			DPRINTF("\t\n1)Add the student details manually");
			DPRINTF("\t\n2)Add the student details from text file");
			DPRINTF("\t\n3)Find the student details by roll number");
			DPRINTF("\t\n4)Find the student details by First name");
			DPRINTF("\t\n5)Find the student details by course ID");
			DPRINTF("\t\n6)Find the total number of students");
			DPRINTF("\t\n7)Delete the students details by roll number");
			DPRINTF("\t\n8)Update the students details by roll number");
			DPRINTF("\t\n9)Show all the information ");
			DPRINTF("\t\n10)To Exit...");

			DPRINTF("\t\nEnter your choice to perform the task : ");

			gets (selection);

			if(atoi (selection) == 1)
				{
					Add_Student_Manually(&students_data);
				}
			else if(atoi (selection) == 2)
				{
					Add_Student_By_file(&students_data);
				}
			else if(atoi (selection) == 3)
				{
					Find_By_Roll_No(&students_data);
				}
			else if(atoi (selection) == 4)
				{
					Find_By_First_Name(&students_data);
				}
			else if(atoi (selection) == 5)
				{
					Find_Student_by_Course_ID(&students_data);
				}
			else if(atoi (selection) == 6)
				{
					Total_Number_Of_Students(&students_data);
				}
			else if(atoi (selection) == 7)
				{
					Delete_Student_By_Roll_No(&students_data);
				}
			else if(atoi (selection) == 8)
				{
					Update_Student_By_Roll_No(&students_data);
				}
			else if(atoi (selection) == 9)
				{
					Show_All_Info(&students_data);
				}
			else if(atoi (selection) == 10)
				{
					DPRINTF("Thank you for using my system...\n")
				}
			else
				{
					printf("\nWrong option please try again...\n");
				}


		}while(atoi (selection) !=10);
	}
