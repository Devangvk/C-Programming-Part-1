/*
Devang Khetia
C programming Practice
Q] Performing multiplication of 2 square matrices
*/

#include<stdio.h>
int main()
{
	int o,i,j,k;                                                     
	printf("Enter the order of matrix\n");
	scanf("%d",&o);
	int arr1[o][o], arr2[o][o],arrop[o][o];
	printf("Enter the first matrix elements\n");
	for(i=0;i<o;i++)
	{
		for(j=0;j<o;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("Enter the second matrix elements\n");
	for(i=0;i<o;i++)
	{
		for(j=0;j<o;j++)
		{
			scanf("%d",&arr2[i][j]);
		}
	}
	for(i=0;i<o;i++) 
	{
        for(j=0;j<o; j++)
        {
            arrop[i][j] = 0;
            for(k=0;k<o;k++)
            {
                arrop[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
	}
	printf("Resultant matrix is\n");
	for(i=0;i<o;i++)
	{
		for(j=0;j<o;j++)
		{
			printf("%d ",arrop[i][j]);
		}
	}
	printf("\n");
	return 0;
}
