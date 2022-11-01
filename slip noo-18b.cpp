
//slip no-18 second question
#include<stdio.h>
struct emp
{
	int id;
	char name[30];
	int salary;
	char desig[20];
	char dept[20];
	
};
int main()
{
	int n,i;
	struct emp e[10];
	printf("enter no of employee to be printed:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		
		printf("\n enter employee id:");  
		scanf("%d",&e[i].id);
		printf("\nenter employee name:");  
		scanf("%s",&e[i].name);
		printf("\n enter employee salary:"); 
		scanf("%d",&e[i].salary);
		printf("\n enter employee designation:");
		scanf("%s",&e[i].desig);
		printf("\n enter employee department:");
		scanf("%s",&e[i].dept);
   }
   for(i=1;i<=n;i++)
   {
		printf("\n------entered details are------");
		
		printf("\n enter employee id:%d",e[i].id);
		printf("\nenter employee name:%s",e[i].name);
		printf("\n enter employee salary:%d",e[i].salary);
		printf("\n enter employee designation:%s",e[i].desig);
		printf("\n enter employee department:%s",e[i].dept);
    }
}


