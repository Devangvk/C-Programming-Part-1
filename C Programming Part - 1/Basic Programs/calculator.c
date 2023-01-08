/*
Devang Khetia
C Programming Practice
Q] To implement a calculator
*/

#include<stdio.h>
int main()
{
	int opcode;
	float n1,n2,op;
	again:
		printf("\nSelect the operation to be performed:\n");
		printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
		scanf("%d",&opcode);
		if(opcode>4)
		{
			printf("Please select a valid operation\n");
			goto again;
		}
	printf("Enter the two numbers\n");
	scanf("%f%f",&n1,&n2);
	switch (opcode)
	{
		case 1:
			op = n1 + n2;
			printf("The sum of %f and %f is %.3f\n",n1,n2,op);
			break;
		case 2:
			op = n1 - n2;
			printf("The difference of %f and %f is %.3f\n",n1,n2,op);
			break;
		case 3:
			op = n1 * n2;
			printf("The product of %f and %f is %.3f\n",n1,n2,op);
			break;
		case 4:
			op = n1 / n2;
			printf("The division of %f with %f is %.3f\n",n1,n2,op);
			break;
	}
	return 0;
}
