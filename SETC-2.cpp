#include<stdio.h>
int main()
//salary of employee
{
  int a,b,c,r,d,id,salary;
  printf("enter employee id");
  scanf("%d",id);
  printf("enter salary");
  scanf("%d",&salary);
  a=salary*10/100;
  r=salary%10/100;
  
  b=r*30/100;
  d=b%30%100;
  
  c=d*5/100;
  
  salary=a+b-c;
  
}


