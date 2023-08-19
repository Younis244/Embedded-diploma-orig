/*
 ============================================================================
 Name        : Func-Ex3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void reverse()
{
	char sentence;
	scanf("%c",&sentence);
	if(sentence!='\n')
		{
		reverse();
		printf("%c",sentence);
		}




}



int main()
{
	printf("Enter a sentence: ");
	fflush(stdin);fflush(stdout);
	reverse();



//	int j=0;
//	int i=strlen(sentence)-1;
//	for(i;i>=0;i--)
//	{
//		reverse[i]=sentence[j];
//		j++;
//	}
//	int k=strlen(sentence);
//	reverse[k]=0;
//
//
//
//		printf("%s",reverse);




	return 0;
}
