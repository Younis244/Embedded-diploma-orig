/*
 * Studen_Management_System.c
 *
 *  Created on: Jun 22, 2024
 *      Author: Younis
 */


#include "Student_Management_System.h"

student StudentsFifo [FIFO_MAX_SIZE] = {0};
#define Number_Of_Courses 5
//#define EOF 9
/*
 *
 *
 *
 * Initializing the buffer
 *
 *
 *
 */
FIFO_Stat init(FIFO_Buffer* fifo , student* st , uint32_t length)
	{
		if(st == NULL)
			return FIFO_NULL;

		fifo->head 		= st;
		fifo->base 		= st;
		fifo->tail 		= st;
		fifo->length 	= length;
		fifo->count 	= 0;

		return FIFO_NO_ERROR;
	}
/*
 *
 *
 *
 *Checking the range of GPA
 *
 *
 *
 */
FIFO_Stat check_range_of_GPA(float gpa)
	{
		if(gpa>0.0 && gpa<=4.0)
		{
			return FIFO_NO_ERROR;//Which means within range
		}
		else
		{
			return FIFO_ERROR;
		}

	}
/*
 *
 *
 *
 *Checking the range of roll number
 *
 *
 *
 */
FIFO_Stat check_range_of_roll_no(int roll)
	{
		if(roll>0 && roll<=50)
		{
			return FIFO_NO_ERROR;
		}
		else
		{
			return FIFO_ERROR;
		}
	}
/*
 *
 *
 *
 *Checking the duplication of roll number
 *
 *
 *
 */
FIFO_Stat check_roll_number (FIFO_Buffer* fifo , int roll)
	{
		//Checking if the buffer is null
		if(!fifo->base || !fifo->head || !fifo->tail)
			return FIFO_NO_ERROR;

		//Checking if fifo is full
		if(fifo->count == FIFO_MAX_SIZE)
		{
			DPRINTF("The data is full...\n");
			return FIFO_FULL;
		}

		int count = fifo->count;

		for(int i=0 ; i<FIFO_MAX_SIZE +1 ; i++)
		{
			if(roll == fifo->head->roll)
			{
				fifo->count = count;
				return FIFO_ERROR;
			}
			else
			{
				if(fifo->count == FIFO_MAX_SIZE)
				{
					fifo->head = fifo->base;
					fifo->count = 0;
				}
				else
				{
					fifo->head++;
					fifo->count++;
				}
//				fifo->count++;
			}



		}
		fifo->count = count;
		return FIFO_NO_ERROR;
	}

/*
 *
 *
 *
 * Adding the student manually step by step
 * Adding (roll umber , first and last name , GPA , Courses taken)
 *
 *
 */

FIFO_Stat Add_Student_Manually( FIFO_Buffer* fifo  )
	{
			//Checking if the buffer is null
			if(!fifo->base || !fifo->head || !fifo->tail)
				return FIFO_NO_ERROR;

			//Checking if the fifo is full
			if(fifo->count == FIFO_MAX_SIZE)
				{
					DPRINTF("The data is full...\n");
					return FIFO_FULL;
				}


			int roll;

			DPRINTF("\n===========================\n");
			DPRINTF("Add the students details\n");
			DPRINTF("===========================\n");
			DPRINTF("Enter the roll number: ");
			scanf("%d",&roll);
			if(check_range_of_roll_no(roll) == FIFO_ERROR)
				{
					DPRINTF("This roll number is out of range...\n");
					return  FIFO_ERROR;
				}
			if(check_roll_number(fifo , roll) == FIFO_ERROR)
			{
				DPRINTF("This roll number is already taken...\n");
				return FIFO_ERROR;
			}

			fifo->head->roll = roll;
			//DPRINTF("Student roll number is %d",fifo->head->roll);
			DPRINTF("\nEnter student first name: ");
			gets(fifo->head->first_name);

			DPRINTF("\nEnter student last name: ");
			gets(fifo->head->last_name);

			DPRINTF("\nEnter student GPA: ");
			scanf("%f",&fifo->head->GPA);

			DPRINTF("\nCourses Taken: ");
			DPRINTF("\nPhysics-->(1)");
			DPRINTF("\nMath-->(2)");
			DPRINTF("\nChemistry-->(3)");
			DPRINTF("\nBiology-->(4)");
			DPRINTF("\nGeology-->(5)");

			for(int i = 0 ; i<Number_Of_Courses ; i++)
				{
					int x ;

					DPRINTF("\nChoose course: ");
					scanf("%d",&fifo->head->course_id[i]);

					DPRINTF("\nDo you want to add more? (if yes( 1)/if no (2)): ");
					scanf("%d",&x);

					if(x == 1)
						{
							continue;
						}
					else if(x == 2)
						{
							break;
						}
				}

			if(fifo->count == FIFO_MAX_SIZE)
				{
					fifo->head = fifo->base;
					fifo->count = 0;
				}
			else
				{
					fifo->head++;
				}

			fifo->count++;

			return FIFO_NO_ERROR;
	}
/*
 *
 *
 *
 * Adding student automatically in 1 step
 * Adding (roll umber , first and last name , GPA , Courses taken)
 *
 *
 */
FIFO_Stat Add_Student_By_file(FIFO_Buffer* fifo)
	{
		//Checking if the buffer is null
		if(!fifo->base || !fifo->head || !fifo->tail)
			return FIFO_NO_ERROR;

		//Checking if the fifo is full
		if(fifo->count == FIFO_MAX_SIZE)
		{
			DPRINTF("The data is full...\n");
			return FIFO_FULL;
		}

		char fName[10] , lName[10];
		int roll_num , course_id[5];
		float gpa;

		FILE *fp;
		fp = fopen("student.txt", "r");
		if (fp == NULL)
		{
			printf("Error opening file!\n");
		    return FIFO_ERROR;
		}

		while(fscanf(fp, "%d %s %s %f %d %d %d %d %d \n" , &roll_num , fName , lName , &gpa , &course_id[0] , &course_id[1] , &course_id[2] , &course_id[3] , &course_id[4] ) != EOF)
		{
			//Checking if the fifo is full
			if(fifo->count == FIFO_MAX_SIZE)
			{
				DPRINTF("The data is full...\n");
				return FIFO_FULL;
			}


			if(check_range_of_roll_no(roll_num) == FIFO_ERROR)
			{
				DPRINTF("This roll number is out of range...\n");
				continue;
			}
			//Should check if roll number is taken or not
			if(check_roll_number(fifo , roll_num) == FIFO_ERROR)
			{
				DPRINTF("This roll number is already taken...\n");
				continue;
			}

			fifo->head->roll = roll_num;
			strcpy(fifo->head->first_name , fName);
			strcpy(fifo->head->last_name , lName);
			fifo->head->GPA = gpa;
			for(int i=0 ; i<Number_Of_Courses ; i++)
			{
				fifo->head->course_id[i] = course_id[i];
			}

			if(fifo->count == FIFO_MAX_SIZE)
			{
				fifo->head = fifo->base;
				fifo->count = 0;
			}
			else
			{
				fifo->head++;
			}
				fifo->count++;
			DPRINTF("The data is added successfully...\n");
		}

		fclose(fp);
		return FIFO_NO_ERROR;
	}
/*
 *
 *
 *
 * Search a student by roll number
 *
 *
 *
 */
FIFO_Stat Find_By_Roll_No(FIFO_Buffer* fifo)
	{
		//Checking if the buffer is null
		if(!fifo->base || !fifo->head || !fifo->tail)
			return FIFO_NO_ERROR;

		int roll;
		DPRINTF("\nWrite the roll number to search for: ");
		scanf("%d" , &roll);
		int count = fifo->count;

		for(int i = 0 ; i<FIFO_MAX_SIZE +1 ; i++)
			{
				if(roll == fifo->head->roll)
				{
					DPRINTF("This roll number (%d) is for\n" , fifo->head->roll);
					DPRINTF("first name: %s\n" , fifo->head->first_name);
					DPRINTF("last name: %s\n" , fifo->head->last_name);
					DPRINTF("GPA: %.1f" , fifo->head->GPA);
					for(int j = 0 ; j<Number_Of_Courses ; j++)
					{
						if(fifo->head->course_id[j] == 0)
						{
							continue;
						}
						else if(fifo->head->course_id[j] == 1)
						{
							DPRINTF("\n%d)Physics of course code(1)" ,j+1);
						}
						else if(fifo->head->course_id[j] == 2)
						{
							DPRINTF("\n%d)Math of course code(2)" ,j+1);
						}
						else if(fifo->head->course_id[j] == 3)
						{
							DPRINTF("\n%d)Chemistry of course code(3)" ,j+1);
						}
						else if(fifo->head->course_id[j] == 4)
						{
							DPRINTF("\n%d)Biology of course code(4)" ,j+1);
						}
						else if(fifo->head->course_id[j] == 5)
						{
						DPRINTF("\n%d)Geology of course code(5)" ,j+1);
						}
					}
					if(fifo->count == FIFO_MAX_SIZE)
					{
						fifo->head = fifo->base;
						fifo->count = 0;
					}
					else
					{
						fifo->head++;
					}
					fifo->count = count;
					return FIFO_NO_ERROR;
				}

				else
				{
					if(fifo->count == FIFO_MAX_SIZE)
					{
						fifo->head = fifo->base;
						fifo->count = 0;
					}
					else
					{
						fifo->head++;
					}
					fifo->count++;
				}
			}
		DPRINTF("This Roll number is not found...\n");
		fifo->count = count;
		return FIFO_NO_ERROR;
	}
/*
 *
 *
 *
 * Search a student by first name
 *
 *
 *
 */
FIFO_Stat Find_By_First_Name(FIFO_Buffer* fifo)
	{
		//Checking if the buffer is null
		if(!fifo->base || !fifo->head || !fifo->tail)
			return FIFO_NO_ERROR;

		//fifo->head = StudentsFifo[0];
		int count = fifo->count;
		char name_to_search [10];
		DPRINTF("\nWrite first name to search (all small letters): ");
		gets(name_to_search);
		for(int i =0 ; i<FIFO_MAX_SIZE +1; i++)
		{
			if(!strcmp(name_to_search , fifo->head->first_name))
			{
				DPRINTF("This first name (%s) is for\n" , fifo->head->first_name);
				DPRINTF("roll number: %d\n" , fifo->head->roll);
				DPRINTF("last name: %s\n" , fifo->head->last_name);
				DPRINTF("GPA: %.1f" , fifo->head->GPA);
				for(int j = 0 ; j<Number_Of_Courses ; j++)
				{
					if(fifo->head->course_id[j] == 0)
					{
						continue;
					}
					else if(fifo->head->course_id[j] == 1)
					{
						DPRINTF("\n%d)Physics of course code(1)" ,j+1);
					}
					else if(fifo->head->course_id[j] == 2)
					{
						DPRINTF("\n%d)Math of course code(2)" ,j+1);
					}
					else if(fifo->head->course_id[j] == 3)
					{
						DPRINTF("\n%d)Chemistry of course code(3)" ,j+1);
					}
					else if(fifo->head->course_id[j] == 4)
					{
						DPRINTF("\n%d)Biology of course code(4)" ,j+1);
					}
					else if(fifo->head->course_id[j] == 5)
					{
						DPRINTF("\n%d)Geology of course code(5)" ,j+1);
					}
				}
				if(fifo->count == FIFO_MAX_SIZE)
				{
					fifo->head = fifo->base;
					fifo->count = 0;
				}
				else
				{
					fifo->head++;
				}
				fifo->count = count;
				return FIFO_NO_ERROR;
			}
			else
			{
				if(fifo->count == FIFO_MAX_SIZE)
				{
					fifo->head = fifo->base;
					fifo->count = 0;
				}
				else
				{
					fifo->head++;
				}
				fifo->count++;
			}

		}
		DPRINTF("This first name is not found...\n");
		fifo->count = count;
		return FIFO_NO_ERROR;
	}
/*
 *
 *
 *
 * search for student by course ID
 *
 *
 *
 */
FIFO_Stat Find_Student_by_Course_ID(FIFO_Buffer* fifo)
	{
		int course_to_search;
		int count = fifo->count;
		DPRINTF("Search for student taking this course\n");
		DPRINTF("\nCourses Taken: ");
		DPRINTF("\nPhysics-->(1)");
		DPRINTF("\nMath-->(2)");
		DPRINTF("\nChemistry-->(3)");
		DPRINTF("\nBiology-->(4)");
		DPRINTF("\nGeology-->(5)");
		DPRINTF("\nEnter number of course you want to know how many students are taking: ");
		scanf("%d" , &course_to_search);

		fifo->head++;
		fifo->head++;
		fifo->head++;
		for(int i=0 ; i<FIFO_MAX_SIZE+1 ; i++)
		{

			if(fifo->head->roll != 0)
			{
				for(int j=0 ; j<Number_Of_Courses ; j++)
				{
					if(fifo->head->course_id[j] == course_to_search)
					{
						DPRINTF("%s %s is taking this course\n" , fifo->head->first_name , fifo->head->last_name);
						break;
					}
				}
			}

				if(fifo->count == FIFO_MAX_SIZE)
				{
					fifo->head = fifo->base;
					fifo->count = 0;
				}
				else
				{
					fifo->head++;
					fifo->count++;
				}


		}
		fifo->count = count;
		return FIFO_NO_ERROR;
	}
/*
 *
 *
 *
 * To know the total number in the school
 *
 *
 *
 */
FIFO_Stat Total_Number_Of_Students(FIFO_Buffer* fifo)
	{
		DPRINTF("The total number of students in the school is : %d \n" , fifo->count);
		return FIFO_NO_ERROR;
	}
/*
 *
 *
 *
 * Delete student by searching for roll number
 *
 *
 *
 */
FIFO_Stat Delete_Student_By_Roll_No(FIFO_Buffer* fifo)
	{
		//Checking if the buffer is null
		if(!fifo->base || !fifo->head || !fifo->tail)
			return FIFO_NO_ERROR;

		//Checking if it empty
		if(fifo->count == 0)
			{
				DPRINTF("It's empty...\n");
				return FIFO_EMPTY;
			}
		int count = fifo->count;
		int roll;
		DPRINTF("\nEnter the roll number you want to delete: ");
		scanf("%d" , &roll);

		for(int i = 0 ; i<FIFO_MAX_SIZE +1; i++)
			{
				if(roll == fifo->tail->roll)
				{

					fifo->count = count;
					fifo->tail->roll = 0;
					fifo->tail->first_name[0] = '\0';
					fifo->tail->last_name[0] = '\0';
					fifo->tail->GPA = 0;
					fifo->tail->course_id[0] = 0;
					fifo->count--;

					DPRINTF("This roll number has been deleted...\n");
					if(fifo->count == fifo->length)
					{
						fifo->tail = fifo->base;
						fifo->count = 0;
					}
					else
					{
						fifo->tail++;
					}

					return FIFO_NO_ERROR;
				}
				else
				{
					if(fifo->count == FIFO_MAX_SIZE)
					{
						fifo->tail = fifo->base;
						fifo->count = 0;
					}
					else
					{
						fifo->tail++;
					}
					fifo->count++;
				}
			}
		DPRINTF("This Roll number is not found...\n");
		fifo->count = count;
		return FIFO_NO_ERROR;
	}
/*
 *
 *
 *
 * Updating student by searching for roll number
 *
 *
 *
 */
FIFO_Stat Update_Student_By_Roll_No(FIFO_Buffer* fifo)
	{
		//Checking if the buffer is null
		if(!fifo->base || !fifo->head || !fifo->tail)
			return FIFO_NO_ERROR;
		//Checking if it empty
		if(fifo->count == 0)
			{
				DPRINTF("It's empty...\n");
				return FIFO_EMPTY;
			}

		int roll;
		DPRINTF("\nWrite the roll number to update: ");
		scanf("%d" , &roll);
		int count = fifo->count;


		for(int i =0 ; i<FIFO_MAX_SIZE +1; i++)
			{
				if(roll == fifo->head->roll)
				{
					DPRINTF("\nWrite new first name: ");
					gets(fifo->head->first_name);
					DPRINTF("\nWrite new last name: ");
					gets(fifo->head->last_name);
					DPRINTF("\nWrite new GPA: ");
					scanf("%f",&fifo->head->GPA);
					fifo->head->course_id[0] = 0;
					DPRINTF("\nCourses Taken: ");
					DPRINTF("\nPhysics-->(1)");
					DPRINTF("\nMath-->(2)");
					DPRINTF("\nChemistry-->(3)");
					DPRINTF("\nBiology-->(4)");
					DPRINTF("\nGeology-->(5)");

					for(int i = 0 ; i<Number_Of_Courses ; i++)
					{
						int x ;

						DPRINTF("\nChoose course: ");
						scanf("%d",&fifo->head->course_id[i]);

						DPRINTF("\nDo you want to add more? (if yes( 1)/if no (2)): ");
						scanf("%d",&x);

						if(x == 1)
						{
							continue;
						}
						else if(x == 2)
						{
							break;
						}
					}
					if(fifo->count == FIFO_MAX_SIZE)
					{
						fifo->head = fifo->base;
						fifo->count = 0;
					}
					else
					{
						fifo->head++;
					}
					fifo->count = count;
					return FIFO_NO_ERROR;
				}
				else
				{
					if(fifo->count == FIFO_MAX_SIZE)
					{
						fifo->head = fifo->base;
						fifo->count = 0;
					}
					else
					{
						fifo->head++;
					}
				fifo->count++;
				}
			}
		fifo->count = count;
		return FIFO_NO_ERROR;
	}
/*
 *
 *
 *
 * Show all students in school with all their data
 *(Roll number , first and last name , GPA , Courses taken)
 *
 *
 */
FIFO_Stat Show_All_Info(FIFO_Buffer* fifo)
	{
		//Checking if the buffer is null
		if(!fifo->base || !fifo->head || !fifo->tail)
			return FIFO_NO_ERROR;

		//Checking if it empty
		if(fifo->count == 0)
		{
			DPRINTF("It's empty...\n");
			return FIFO_EMPTY;
		}

		int count = fifo->count;

		for(int i =0 ; i<FIFO_MAX_SIZE+1 ; i++)
			{

			if(fifo->head->roll == 0)
			{
				if(fifo->count == FIFO_MAX_SIZE)
				{
				fifo->head = fifo->base;
				fifo->count = 0;
				}
				else
				{
				fifo->head++;
				}
				fifo->count++;
				continue;
			}

				DPRINTF("\n===========================");
				DPRINTF("\nStudent roll number: %d\n", fifo->head->roll);
				DPRINTF("Student first name: %s\n",fifo->head->first_name);
				DPRINTF("Student last name: %s\n",fifo->head->last_name);
				DPRINTF("Student GPA: %.1f\n",fifo->head->GPA);
				DPRINTF("Student courses: \n")

				for(int j = 0 ; j<Number_Of_Courses ; j++)
				{
				if(fifo->head->course_id[j] == 0)
					{
						continue;
					}
				else if(fifo->head->course_id[j] == 1)
					{
						DPRINTF("\n%d)Physics of course code(1)" ,j+1);
					}
				else if(fifo->head->course_id[j] == 2)
					{
						DPRINTF("\n%d)Math of course code(2)" ,j+1);
					}
				else if(fifo->head->course_id[j] == 3)
					{
						DPRINTF("\n%d)Chemistry of course code(3)" ,j+1);
					}
				else if(fifo->head->course_id[j] == 4)
					{
						DPRINTF("\n%d)Biology of course code(4)" ,j+1);
					}
				else if(fifo->head->course_id[j] == 5)
					{
						DPRINTF("\n%d)Geology of course code(5)" ,j+1);
					}
				}
					DPRINTF("\n===========================\n");

					if(fifo->count == FIFO_MAX_SIZE)
					{
						fifo->head = fifo->base;
						fifo->count = 0;
					}
					else
					{
						fifo->head++;
					}
			}
		fifo->count = count;
		return FIFO_NO_ERROR;
	}

