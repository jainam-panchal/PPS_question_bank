#include <stdio.h>

struct person
{
 char name[30];
 char dateOfJoining[15];
 float salary;
};

int main(void) 
{
  int i;
  struct person personinfo[5];

 
 for(i=0;i<5;i++)
 {
  printf("Person's Name : ");
  scanf("%s",personinfo[i].name);
  printf("Person's Date of Joining : ");
  scanf("%s",personinfo[i].dateOfJoining);
  printf("Person's Salary : ");
  scanf("%f",&personinfo[i].salary);
 }
 
 for(i=0;i<5;i++)
 {
  printf("\n Person %d Detail",i+1);
  printf("\n Name   = %s",personinfo[i].name);
  printf("\n Date of Joining    = %s",personinfo[i].dateOfJoining);
  printf("\n Salary = %.2f\n",personinfo[i].salary);
 }
 return 0;
}