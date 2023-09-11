/*
 ============================================================================
 Name        : Assin-Ex2.c
 Author      : Younis Tamer Hosny
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*First solution
	char array[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	char* ptr=array;

	printf("The alphabet is: \r\n");
	for(int i=0;i<sizeof(array);i++,ptr++)
	{
		printf("%c ",*ptr);
	}
*/

	/*2nd solution*/
	char alphabet[27];
	char* pointer=alphabet;

	for(int i=0;i<26;i++,pointer++)
	{
		*pointer=i+'A';

	}

	pointer=alphabet;

	printf("The alphabet is: \r\n");
	for(int i=0;i<26;i++,pointer++)
	{
		printf("%c ",*pointer);
	}


	/*3rd solution
	 char alphabet[27];
	char* pointer=alphabet;

	for(int i=0;i<26;i++)
	{
		alphabet[i]=i+'A';
	}


	printf("The alphabet is: \r\n");
	for(int i=0;i<26;i++,pointer++)
	{
		printf("%c ",*pointer);
	}
	 */


	return 0;
}
