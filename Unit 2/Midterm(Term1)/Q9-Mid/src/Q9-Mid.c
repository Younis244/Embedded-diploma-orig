/*
 ============================================================================
 Name        : Q9-Mid.c
 Author      : Younis Tamer Hosny
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void reverseWords(char arr[],int n)
{
	for(int i=0;i<n;i++)
		{
			if(arr[i]==' ')
			{
				for(int j=i;j<=n;j++)
				{
					printf("%c",arr[j]);
				}
					continue;
			}
		}
		printf(" ");
		for(int i=0;i<n;i++)
		{
			printf("%c",arr[i]);
			if(arr[i]==' ')
				break;
		}
}

int main()
{
	char array[100];

	printf("Enter the two words you want to reverse: ");
	fflush(stdin);fflush(stdout);
	gets(array);

	int size=strlen(array)-1;

	printf("Before reversing: %s",array);
	printf("\nAfter reversing: ");

	reverseWords(array,size);

//	for(int i=0;i<n;i++)
//	{
//		if(arr[i]==' ')
//		{
//			for(int j=i;j<=n;j++)
//			{
//				printf("%c",arr[j]);
//			}
//				continue;
//		}
//	}
//	printf(" ");
//	for(int i=0;i<n;i++)
//	{
//		printf("%c",arr[i]);
//		if(arr[i]==' ')
//			break;
//	}



	return 0;
}
