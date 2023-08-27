/*
 ============================================================================
 Name        : Q10-Midd.c
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
	int number;
	int k,y;
	int h=0;
	int s=0;

	printf("Enter number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&number);

	for(int i=31;i>=0;i--)
	{

		k=number>>i;
		if(k&1)
		{
			s++;
			for(int j=i-1;j>=0;j--)
			{
				y=number>>j;
				if(y&1)
					s++;
				else
				{
					if(s>h)
					h=s;
					s=0;
					i=j;
					break;
				}
			}
		}
		else
			continue;

	}
	printf("Total: %d",h);


	return 0;
}

