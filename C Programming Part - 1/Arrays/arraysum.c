/*
Devang Khetia
C programming Practice
Q] Calculating the sum of all array elements
*/

#include<stdio.h>
void arraysum(int n, int arr[])         // Defining the function
{
	int total=0;
	for(int i=0;i<n;i++)
	{
		total+=arr[i];
	}
	printf("Sum of all elements is %d\n",total);
}

int main()
{
	int length;
	printf("Enter the size of array:\n");
	scanf("%d",&length);
	int arr[length];
	printf("Enter the array elements:\n");
	for(int i=0;i<length;i++)
	{
		scanf("%d",&arr[i]);
	}
	arraysum(length,arr);
	return 0;
}
