/*
Devang Khetia
C programming Practice
Q] Implementing insertion sort alogirthm to sort the array
*/

#include<stdio.h>
void inssort(int arr[],int n)
{
	int i,j,x;
	for(i=0;i<n;i++)
	{
		x = arr[i];
		j = i;
		while(j>0 && arr[j-1]>x)
		{
			arr[j] = arr[j-1];
			j--;
		}
		arr[j] = x;
	}
}

int main()
{
	int n,i;
	printf("Enter the length of the array\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements in the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	inssort(arr,n);
	printf("The sorted array is\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
