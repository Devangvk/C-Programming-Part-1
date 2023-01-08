/*
Devang Khetia
C Programming Practice
Q] To print a '*' pattern
example -

*****
 ***
  *
  
*/

#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of rows\n");
	scanf("%d",&n);
	for(int i=5;i>0;i--)
	{
		for(int space=1;space<=n-i;space++)
		{
			printf(" ");
		}
		for(int j=1;j<=2*i-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
