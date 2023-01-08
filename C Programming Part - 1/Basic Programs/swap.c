/*
Devang Khetia
C Programming Practice
Q] To swap 2 numbers
*/

#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("Enter 2 numbers, a and b:\n");
	scanf("%d%d",&a,&b);
	temp = b;
	b = a;
	a = temp;
	printf("The new values of a and b are %d and %d\n",a,b);
	return 0;
}
