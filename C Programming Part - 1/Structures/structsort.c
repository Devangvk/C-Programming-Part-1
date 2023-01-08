/*
Devang Khetia
C Programming Parctice
Q] Sorting the array of structures based on salary of employee
*/

#include<stdio.h>
struct employee
{
	int id;
	char name[25];
	float salary;
};

int main()
{
	int i,n,j;
	printf("Enter the number of employee whose data is to be sorted\n");
	scanf("%d",&n);
	struct employee emp[n],temp;
	for(i=0;i<n;i++)
	{
		char str[20];
		printf("Enter the details for employee %d\n",i+1);
		printf("Enter ID\n");
		scanf("%d",&emp[i].id);
		printf("Enter name\n");
		scanf("%s",emp[i].name);
		printf("Enter salary\n");
		scanf("%f",&emp[i].salary);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(emp[i].salary > emp[j].salary)
			{
				temp = emp[i];
				emp[i] = emp[j];
				emp[j] = temp;
			}
		}
	}
	for(i=n-1;i>=0;i--)
	{
		printf("%d\t%s\t%f\n",emp[i].id,emp[i].name,emp[i].salary);
	}
	return 0;
}
