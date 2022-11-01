#include<stdio.h>
//slip no-1 second question
struct emp
{
	int id;
	char name[20];
	int salary;
	
};
int main()
{
	int i,n,x,y;
	struct emp p[10];
	printf("enter no of choice:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\nenter id:");
		scanf("%d",&p[i].id);
		printf("\nenter name:");
		scanf("%s",&p[i].name);
		printf("\nenter salary:");
		scanf("%d",&p[i].salary);
	}
	printf("\nenter choice:");
	scanf("%d",&x);
	switch(x)
	{
		case 1:printf("\nenter id:");
		       scanf("%d",&y);
		       
		       for(i=1;i<=n;i++)
		       {
		       	if(y==p[i].id)
		       	 {
		       	 	 printf("employee salary:%d",p[i].salary);
		       	 	 printf("employee name:%s",p[i].name);
		       	 	 
				 }
				 else
				 {
				 	printf("id not matched:");
				 }
				 
	           }
	           break;
	           
	      case 2:
		          for(i=1;i<=n;i++)
				  {
				  	 printf("\nemployee id:%d",p[i].id);
					 printf("\nemployee salary:%d",p[i].salary);
		       	 	 printf("\nemployee name:%s",p[i].name);
				  	
				  }     
    }
}
