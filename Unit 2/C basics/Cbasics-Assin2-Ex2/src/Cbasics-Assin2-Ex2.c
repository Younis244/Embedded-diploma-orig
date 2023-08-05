/*
 ============================================================================
 Name        : Cbasics-Assin2-Ex2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char letter;
	printf("Enter an alphabet: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&letter);

	if(letter=='i'||letter=='a'||letter=='e'||letter=='o'||letter=='u')
		printf("%c is a vowel",letter);
	else
		printf("%c is a consonant",letter);
	return EXIT_SUCCESS;
}
