/*
Devang Khetia
C programming Practice
Q] Deleting an element from the array
*/

#include<stdio.h>
int main()
{
	int length,del,i;
	printf("Enter the length of the array\n");
	scanf("%d",&length);
	int arr[length];
	printf("Enter the array elements\n");
	for(i=0;i<length;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("The entered array is \n");
	for(i=0;i<length;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nEnter the number to be deleted\n");
	scanf("%d",&del);
	for(i=0;i<length;i++)
	{
		if(arr[i]==del)
			break;
	}
	if(i<length)
	{
		for(int j=i;j<length;j++)
		{
			arr[j] = arr[j+1];
		}
		length--;
		for(int j=0;j<length;j++)
		{
			printf("%d ",arr[j]);
		}
		printf("\n");
	}
	else
	{
		printf("Number to be deleted not in array\n");
	}
	return 0;
}
