/*
Devang Khetia
C programming Practice
Q] Reversing the array
*/

#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the length of the array\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("The reversed array is\n");
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
