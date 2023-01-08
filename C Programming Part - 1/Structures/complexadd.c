/*
Devang Khetia
C Programming Parctice
Q] Adding two complex numbers using structures
*/

#include<stdio.h>
int main()
{
	struct complex
	{
		float rp;
		float ip;
	}a,b,c;
	printf("Enter the real and imaginary part of 1st number\n");
	scanf("%f%f",&a.rp,&a.ip);
	printf("Enter the real and imaginary part of 2nd number\n");
	scanf("%f%f",&b.rp,&b.ip);
	c.rp = a.rp + b.rp;
	c.ip = a.ip + b.ip;
	printf("The addition is %.3f + j%.3f\n",c.rp,c.ip);
	return 0;
}
