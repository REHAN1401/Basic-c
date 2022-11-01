#include<stdio.h>
struct emp
{
	char name[30];
	int id;
	int sal;
	
};

 int main()
 {
 	struct emp s[10];
 	int n,ch,id,i;
 	
 	
 	printf("enter the no. of employees=");
 	scanf("%d",&n);
 	
 	for(i=1;i<=n;i++)
 	{
 		printf("enter employee id>>");
 		scanf("%d",&s[i].id);
 		
 		printf("enter employee name>>");
 		scanf("%s",&s[i].name);
 		
 		printf("enter employee salary>>");
 		scanf("%d",&s[i].sal);
	 }
	 printf("\nenter your choice ,if choose 1 employee search will be given,if 2 employee details will be shown");
	 scanf("%d",&ch);
	 switch(ch)
	  
	 {

	 case 1:printf("\nenter employee id=");
	        scanf("%d",&s[i].id);	
	 	
	 
	  for(i=1;i<=n;i++)
	{
	  	if(s[i].id==id)
	   {
	  
	    printf("name=%s",s[i].name);
	    printf("\nsalary=%d",s[i].sal);	
	    break; 
       }
    }
      case 2: printf("all employee details");
      	
      	for(i=1;i<=n;i++)
      	{
      		printf("id=%d",s[i].id);
			printf("name=%s",s[i].name);
	        printf("\nsalary=%d",s[i].sal);
	        break;
	    }
	 
      }
  
}
