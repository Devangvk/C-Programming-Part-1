/*
Devang Khetia
C Programming Practice
Q] To find sum of firt 'n' natural numbers
*/

#include<stdio.h>

int main()
{
	int n,sum=0;
	printf("Enter the n value:\n");
	scanf("%d",&n);
	sum = n*(n+1)/2;
	printf("The sum of first %d natural numbers is %d \n",n,sum);
	return 0;
}
