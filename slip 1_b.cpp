// slip no 1 second question
#include<stdio.h>
#include<conio.h>
struct emp
{
	int id;
	int salary;
	char name[30];
	
};
int main()
{
struct emp d[10];
int n,i,ch,iid;

printf("enter the number of employee>>");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
	printf("\n enter id:");
	scanf("%d",&d[i].id);
	
	printf("\n enter name:");
	scanf("%s",&d[i].name);
	
	printf("\n enter salary:");
	scanf("%d",&d[i].salary);
}
    	printf("\n enter your choice>>> ");
    	scanf("%d",&ch);

	switch(ch)
	{
	case 1:
		printf("enter employee to id to find");
		scanf("%d",&iid);
		
		for(i=1;i<=n;i++)
		{
			if(iid==d[i].id)
	          {
	          	printf("employee name:%s",d[i].name);
	          	printf("employee salary:%d",d[i].salary);
	          	
	          }
	    } 
	    break;
			  
    case 2:
	         
			 for(i=1;i<=n;i++)
			 {
	      		printf("\n employee id:%d",d[i].id);
				printf("\n employee name:%s",d[i].name);
	          	printf("\n employee salary:%d",d[i].salary);
		       	
        
              }
  }
}
