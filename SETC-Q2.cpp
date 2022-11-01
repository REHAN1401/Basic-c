#include<stdio.h>
#include<math.h>
int main()
//salary of employee
{
int id;	
float basicsalary,rent,allowence,tax,r;
printf("**enter employee id**\n");
scanf("%d",&id);
printf("~~enter the basicsalary~~\n");
scanf("%f",&basicsalary);

rent=(basicsalary*10/100);
allowence=(basicsalary*30/100);
tax=(basicsalary*5/100);
r=basicsalary + ((rent+allowence)-tax);
printf("$$$salary of employee is$$$ :%f\n",r);
  
}


