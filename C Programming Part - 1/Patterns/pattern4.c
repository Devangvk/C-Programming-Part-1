/*
Devang Khetia
C Programming Practice
Q] To print a number pattern
example -
1
2 3
4 5 6
*/

#include<stdio.h>
int main()
{
	int n,x=1;
	printf("Enter the number of rows\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d ",x);
			x++;
		}
		printf("\n");
	}
	return 0;
}
