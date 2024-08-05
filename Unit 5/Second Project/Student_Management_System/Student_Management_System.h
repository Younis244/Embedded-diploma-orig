/*
 * Student_Management_System.h
 *
 *  Created on: Jun 22, 2024
 *      Author: Younis
 */

#ifndef STUDENT_MANAGEMENT_SYSTEM_H_
#define STUDENT_MANAGEMENT_SYSTEM_H_

#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "conio.h"
#include "stdint.h"
#include "string.h"

//Btozbott el ada2222
#define DPRINTF(...)		{fflush(stdout);\
							fflush(stdin);\
							printf(__VA_ARGS__);\
							fflush(stdout);\
							fflush(stdin);}

#define FIFO_MAX_SIZE   50


typedef enum
	{
		FIFO_NO_ERROR,
		FIFO_FULL,
		FIFO_EMPTY,
		FIFO_NULL,
		FIFO_ERROR
	}FIFO_Stat;

typedef struct
	{
		char first_name[10];
		char last_name[10];
		int roll;
		float GPA;
		int course_id[10];
	}student;

typedef struct
	{
		student* head;
		student* base;
		student* tail;
		uint32_t count;
		uint32_t length;
	}FIFO_Buffer;


FIFO_Stat init						(FIFO_Buffer* fifo , student* st , uint32_t length);
FIFO_Stat Add_Student_Manually		(FIFO_Buffer* fifo);
FIFO_Stat Add_Student_By_file		(FIFO_Buffer* fifo);
FIFO_Stat Find_By_Roll_No			(FIFO_Buffer* fifo);
FIFO_Stat Find_By_First_Name		(FIFO_Buffer* fifo);
FIFO_Stat Find_Student_by_Course_ID	(FIFO_Buffer* fifo);
FIFO_Stat Total_Number_Of_Students	(FIFO_Buffer* fifo);
FIFO_Stat Delete_Student_By_Roll_No	(FIFO_Buffer* fifo);
FIFO_Stat Update_Student_By_Roll_No	(FIFO_Buffer* fifo);
FIFO_Stat Show_All_Info				(FIFO_Buffer* fifo);
FIFO_Stat check_roll_number 		(FIFO_Buffer* fifo , int roll);
FIFO_Stat check_range_of_roll_no	(int roll);
FIFO_Stat check_range_of_GPA		(float gpa);

#endif /* STUDENT_MANAGEMENT_SYSTEM_H_ */
