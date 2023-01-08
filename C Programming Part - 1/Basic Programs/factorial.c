/*
Devang Khetia
C Programming Practice
Q] To find the factorial of a number
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,factorial=1;
	printf("Enter the number to calculate its factorial\n");
	scanf("%d",&n);
	if(n==0)
		{
			printf("The factorial is 1\n");
			return 0;
		}
	else if (n<0)
		{
			printf("Factorial do not exist for negative number\n");
			exit(0);
		}
	else 
		while(n!=1)
		{
			factorial*=n;
			n--;
		}
		printf("The factorial is %d\n",factorial);
	return 0;
}
