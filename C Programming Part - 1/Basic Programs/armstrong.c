/*
Devang Khetia
C Programming Practice
Q] To check whether given number is armstrong or not
*/

#include<stdio.h>
int main()
{
	int n,x,r,s=0;
	printf("Enter a number\n");
	scanf("%d",&n);
	x = n;
	while(n!=0)
	{
		r = n%10;
		s += r*r*r;
		n/=10;
	}
	if(x==s)
		printf("Entered number is an armstrong number\n");
	else
		printf("Entered number is not an armstrong number\n");
	return 0;
}
