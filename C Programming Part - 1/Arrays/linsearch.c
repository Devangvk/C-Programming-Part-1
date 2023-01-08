/*
Devang Khetia
C programming Practice
Q] Finding an element in an array using linear search algorithm
*/

#include<stdio.h>
int main()
{
	int n;
	printf("Enter the length of the array\n");
	scanf("%d",&n);
	int arr[n],x,i;
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the number to be searched\n");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(arr[i]==x)
		{
			printf("%d found at index %d\n",x,i);
			break;
		}
	}
	if(i>=n)
	{
		printf("Number not found in the array\n");
	}
	return 0;
}
