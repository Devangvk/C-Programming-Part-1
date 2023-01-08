/*
Devang Khetia
C programming Practice
Q] Implementing selection sort alogirthm to sort the array
*/

#include<stdio.h>
void swap(int *x,int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
int main()
{
	int n,i,j,minI;
	printf("Enter the length of the array\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements in the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		minI = i;
		for(j=i+1;j<n;j++)
		{
			if(arr[minI]>arr[j])
				minI=j;
		}
		swap(&arr[minI],&arr[i]);
	}
	printf("The sorted array is\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
