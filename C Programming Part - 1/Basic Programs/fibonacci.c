/*
Devang Khetia
C Programming Practice
Q] To print fibonacci series of length 'n'
*/

#include<stdio.h>
int main()
{
	int n,a=0,b=1,x;
	printf("Enter the length of series\n");
	scanf("%d",&n);

	printf("%d  %d  ",a,b);
	for(int i=3;i<=n;++i)
	{
		x=a+b;
		printf("%d  ",x);
		a=b;
		b=x;
	}
	printf("\n");
	return 0;
}
