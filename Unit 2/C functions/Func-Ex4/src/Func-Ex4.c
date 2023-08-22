#include <stdio.h>
#include <stdlib.h>
int n=1;
int result(int number,int power)
{
	n*=number;
	power--;
	if(power==0)
	{
		return n;
	}
		 result(number,power);
}

int main(void)
{

	int rkm,oss;

	printf("Enter base number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&rkm);

	printf("Enter power number (Postive): ");
		fflush(stdin);fflush(stdout);
		scanf("%d",&oss);


	printf("%d^%d= %d",rkm,oss,result(rkm,oss));

	return EXIT_SUCCESS;
}
