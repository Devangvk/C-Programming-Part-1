/*
Devang Khetia
C Programming Practice
Q] To find whether given number is even or odd
*/

#include<stdio.h>
int main()
{
	int number;
	printf("Enter a number:\n");
	scanf("%d",&number);
	if(number % 2 ==0)
		printf("The number entered is even\n");
	else
		printf("The number entered is odd\n");
	
	return 0;
}
