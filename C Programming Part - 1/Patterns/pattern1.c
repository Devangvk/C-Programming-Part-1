/*
Devang Khetia
C Programming Practice
Q] To print a pattern of numbers:
example -
			1
			22
			333
			22
			1
*/

#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter the highest number in pattern\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	for(i=n-1;i>0;i--)
	{
		for(j=i;j>0;j--)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	return 0;
}
