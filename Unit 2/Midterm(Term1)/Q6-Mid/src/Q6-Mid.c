/*
 ============================================================================
 Name        : Q6-Mid.c
 Author      : Younis Tamer Hosny
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//void unique(int array[], int n){
//	int i;
//	int j;
//	int total = 1;
//	for(i=0;i<n;i++)
//	{
//		for(j=0;j<n;j++)
//		{
//			if(array[i]==array[j]&&i!=j)
//				break;
//		}
//		if(j==n)
//		{
//			printf("unique element %d: %d \n",total,array[i]);
//			total++;
//		}
//	}
//
//}

int findUnique(int arr[], int size) {
    int unique = arr[0];

    for (int i = 1; i < size; i++) {
        unique ^= arr[i];
    }

    return unique;
}

int main()
{
	int arr[100];
	int size;



	printf("Enter size  of array: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&size);

	printf("Enter elements: ");
	fflush(stdin);fflush(stdout);

	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("%d",findUnique(arr,size));


	return 0;
}
