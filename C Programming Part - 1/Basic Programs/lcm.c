/*
Devang Khetia
C Programming Practice
Q] Finding the LCM of two numbers
*/

#include<stdio.h>
int main()
{
	int a,b;
	int max;
	printf("Enter two numbers:\n");
	scanf("%d%d",&a,&b);
	if(a>b)
		max = a;
	else
		max = b;
	while(max % a != 0 || max % b !=0 )
	{
		max++;
	}
	printf("The LCM is %d\n",max);
	return 0;
}
