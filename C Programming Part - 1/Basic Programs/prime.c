/*
Devang Khetia
C Programming Practice
Q] To check whether given number is prime or not
*/

#include<stdio.h>
int main()
{
	int x,count = 0;
	printf("Please enter any number:\n");
	scanf("%d",&x);
	for(int i=2;i<x;i++)
	{
		if(x%i == 0)
		{
			count+=1;	
		}
	}
	if(count == 0)
		printf("The number is prime\n");
	else
		printf("The number is not prime and it has %d factors\n",count);
		
	return 0;
}
