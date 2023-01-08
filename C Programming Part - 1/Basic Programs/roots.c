/*
Devang Khetia
C Programming Practice
Q] To find the roots of quadratic equation
*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	float a,b,c;
	float dis,r1,r2,r,i;
	printf("The quadratic equation is in form ax^2 + bx + c =0\n");
	printf("Enter the coefficients, a,b and c\n");
	scanf("%f%f%f",&a,&b,&c);
	dis = (b*b) - (4*a*c);
	if(dis>0)
	{
		printf("The equation has real and distinct roots\n");
		r1 = (-b + sqrt(dis))/2*a;
		r2 = (-b - sqrt(dis))/2*a;
		printf("root 1 = %f",r1);
		printf("root 2 = %f",r2);
	}
	else if(dis==0)
	{
		printf("The roots are equal\n");
		r1 = -b/2*a;
		r2 = r1;
		printf("Roots are %f",r1);
	}
	else if(dis<0)
	{
		printf("Roots are complex\n");
		r = -b/(2*a);
		i = sqrt(abs(dis))/(2*a);
		printf("root1=%f+i%f\n",r,i);
		printf("root2=%f-i%f\n",r,i);
	}
	return 0;
}
