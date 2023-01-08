/*
Devang Khetia
C programming Practice
Q] Finding an element in an array using binary search algorithm
*/

#include<stdio.h>
int binary_search(int arr[], int n, int x)
{
	int i1,i2=n-1;
	while(i1<=i2)
	{
		int mid = (i1+i2)/2;
		if(arr[mid]==x)
			return mid;
		else if(x<arr[mid])
			i2=mid-1;
		else
			i1=mid+1;
	}
	return -1;
}
int main()
{
	int n,index,x;
	printf("Enter the length of the array\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter a sorted array\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the number to be searched\n");
	scanf("%d",&x);
	index = binary_search(arr,n,x);
	if(index!=-1)
		printf("%d found in array at index %d\n",x,index);
	else
		printf("Number not in the array\n");
	return 0;
}
