/*
Devang Khetia
C Programming Practice
Q] To convert number from binary to decimal and vice versa
*/

#include<stdio.h>
#include<math.h>
void bd(int b)
{
	int sum =0;
	for(int i=0;b>0;i++)
	{
		sum+= pow(2,i)*(b%10);
		b/=10;
	}
	printf("The decimal value is %d\n",sum);
}

void db(long d)
{
	long bin=0,dec=d,i=1;
	while(dec>0)
	{
		bin += (dec % 2) * i;
        dec /= 2;
        i*= 10;
	}
	printf("The binary value is %ld\n",bin);
}
int main()
{
	int opcode,binary;
	long decimal;
	printf("Select the operation to be performed\n");
	printf("1. Binary to decimal\n2. Decimal to binary\n");
	scanf("%d",&opcode);
	if(opcode == 1)
	{
		printf("Enter the binary number\n");
		scanf("%d",&binary);
		bd(binary);
	}
	else if (opcode == 2)
	{
		printf("Enter decimal number\n");
		scanf("%ld",&decimal);
		db(decimal);
	}
	return 0;
}
