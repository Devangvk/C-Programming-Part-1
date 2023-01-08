/*
Devang Khetia
C programming Practice
Q] Inserting an element in the array at any position
*/

#include<stdio.h>
void insert(int arr[20],int key, int pos,int n)
{
	int x;
	for(x=n-1;x>=pos;x--)
	{
		arr[x+1]=arr[x];
	}
	arr[pos-1] = key;
	for(x=0;x<n;x++)
	{
		printf("%d",arr[x]);
	}
	printf("\n");
}

int main()
{
	int n,arr[20],key,pos;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	printf("Enter the array elements\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the number to be inserted\n");
	scanf("%d",&key);
	printf("Enter the position of the number to be inserted\n");
	scanf("%d",&pos);
	insert(arr,key,pos,n);
	return 0;
}
