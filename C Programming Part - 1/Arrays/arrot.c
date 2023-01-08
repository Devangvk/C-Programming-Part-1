/*
Devang Khetia
C programming Practice
Q] To perform left rotation of array
*/

#include <stdio.h>
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
void leftRotate(int arr[], int d, int n)
{
    int i, j, k, temp;
    d = d % n;
    int g_c_d = gcd(d, n);
    for (i = 0; i < g_c_d; i++)
    {
        temp = arr[i];
        j = i;
        while(1)
        {
            k = j + d;
            if (k >= n)
                k = k - n;
            if (k == i)
                break;
            arr[j] = arr[k];
            j = k;
        }
        arr[j] = temp;
    }
}
int main()
{
    int n,d;
	printf("Enter the length of the array\n");
	scanf("%d",&n);
	int arr[n],x,i;
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the position for rotating left\n");
	scanf("%d",&d);
    leftRotate(arr, d, n);
    printf("The rotated array is\n");
    for(i=0;i<n;i++)
    {
    	printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
