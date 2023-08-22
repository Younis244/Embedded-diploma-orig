
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

	return 0;
}
