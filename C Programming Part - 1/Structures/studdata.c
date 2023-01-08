/*
Devang Khetia
C Programming Parctice
Q] Create a structure to store student data 
*/

#include<stdio.h>
struct student
{
  char name[50];
  char Class[100];
  int roll_number;
  float marks[4];
};

int main()
{
  int n;
  printf("Enter the number of students whose data is to be stored\n");
  scanf("%d",&n);
  struct student s[n];
  for (int i=0;i<n;i++)
  {
    printf("Enter details of student %d\n", i+1);
    printf("Enter name: \n");
    scanf("%s", s[i].name);
    printf("Enter roll no: \n");
    scanf("%d", &s[i].roll_number);
    printf("Enter class: \n");
    scanf("%s", s[i].Class);
    printf("Enter the marks in Physics:\n");
    scanf("%f", &s[i].marks[0]);
    printf("Enter the marks in CHemistry:\n");
    scanf("%f", &s[i].marks[1]);
    printf("Enter the marks in Maths:\n");
    scanf("%f", &s[i].marks[2]);
    printf("Enter the marks in Electronics:\n");
    scanf("%f", &s[i].marks[3]);
    printf("\n");
  }

  printf("\n");
  printf("Name\t\tRoll no\t\t\tClass\t\t\t\tMarks\n");
  for (int i=0;i<n;i++)
  {
    printf("%s\t\t%d\t\t\t%s\t\t",
      s[i].name, s[i].roll_number, s[i].Class);
    for (int j=0;j<4;j++) 
    {
      printf("%.2f\t", s[i].marks[j]);
    }
    printf("\n");
  }

  return 0;
}

