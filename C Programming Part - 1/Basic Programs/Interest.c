/*
Devang Khetia
C Programming Practice
Q] Calculation of Simple and Compound interest
*/

#include<stdio.h>
#include<math.h>

// Simple Interest Function

void simpinterest(double p, double r, double t)
{
	double si = p*r*t/100;
	printf("The simple interest is %lf\n",si);
}

// Compound Interest Function

void compinterest(double p, double r, double t)
{
	double ci = p*(pow((1 + r/100),t));
	printf("The compound interest is %lf\n",ci);
}

int main()
{
	int opcode;
	double principle, rate, time;
	printf("Select the operation to be performed:\n1. Simple Interest\n2. Compound Interest\n");
	scanf("%d",&opcode);
	switch(opcode)
	{
		case 1:
			printf("Please enter principle amount, rate of interest and time period:\n");
			scanf("%lf%lf%lf",&principle,&rate,&time);
			simpinterest(principle, rate, time);
			break;
		case 2:
			printf("Please enter principle amount, rate of interest and time period:\n");
			scanf("%lf%lf%lf",&principle,&rate,&time);
			compinterest(principle, rate, time);
			break;
		default :
			printf("Please select a valid operation\n");
			break;
	}
	return 0;
}
