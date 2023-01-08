/*
Devang Khetia
C programming Practice
Q] Removing all dupicate elements from the array
*/

#include<stdio.h>
int main()
{
	int n,i,j,k,count;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i] == arr[j])
			{
				for(k=j;k<n;k++)
				{
					arr[k] = arr[k+1];
				}
				j--;
				n--;
			}
		}
	}
	printf("The new array after removing duplicates is \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
