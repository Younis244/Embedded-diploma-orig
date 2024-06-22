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

//struct Sperson
//{
//	char name [50];
//	int id;
//};
//
//int main()
//{
//	struct Sperson Clients[]=
//	{
//			{"Younis Tamer",1000},
//			{"Mohamed morsy",1001},
//			{"Marwan el masry",1002}
//	};
//
//	struct Sperson* ptr=&Clients;
//
//	printf("Clients data: \r\n");
//	for(int i=0;i<sizeof(Clients)/sizeof(struct Sperson);i++,ptr++)
//	{
//		printf("Name: %s\nID: %d\r\n",ptr->name,ptr->id);
//	}

int count_digits(int number) {
  int count = 0;

  // Handle negative numbers (optional)
  if (number < 0) {
    number = -number; // Convert to positive for counting
  }

  // Loop until the number becomes 0
  while (number != 0) {
    number /= 10;  // Remove the last digit
    count++;       // Increment the count for each digit removed
  }

  return count;
}

int main() {
  int num;

  printf("Enter an integer: ");
  scanf("%d", &num);

  int digit_count = count_digits(num);

  printf("The number of digits in %d is %d\n", num, digit_count);

  return 0;
}


