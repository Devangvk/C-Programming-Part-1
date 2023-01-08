/*
Devang Khetia
C Programming Practice
Q] To convert temperature from celcius to fahrenheit
*/

#include<stdio.h>
int main()
{
	float celtemp, fahtemp;
	printf("Enter the temperature in celcius:\n");
	scanf("%f",&celtemp);
	fahtemp = (celtemp * 9/5) + 32;
	printf("The temperature in fahrenheit is %.2f\n",fahtemp);
	return 0;
}

