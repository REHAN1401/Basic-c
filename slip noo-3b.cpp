//slip no 3 second question...
#include<stdio.h>
#include<conio.h>
struct emp 
{
	int eno;
	char ename[30];
	int salary;
};struct emp e[10];
int main()
{
	int n,i,ch;
	printf("enter your choice>>");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("\n enter employee id>>");
		scanf("%d",&e[i].eno);
		
		printf("\n enter employee name>>");
		scanf("%s",&e[i].ename);
		
		printf("\n enter employee salary>>");
		scanf("%d",&e[i].salary);
		
	}
	
	printf("\nenter your choice>>");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
		for(i=1;i<=n;i++)
		{
		if(e[i].salary>5000)
		    {
			printf("\n employee id is %d",e[i].eno);
			printf("\n employee name is %s",e[i].ename);
			printf("\n employee salary is %d",e[i].salary);
	    	}
    	}
	     break;
	
	case 2:
		for(i=1;i<=n;i++)
		{
			printf("\n employee id is %d",e[i].eno);
			printf("\n employee name is %s",e[i].ename);
			printf("\n employee salary is %d",e[i].salary);
			
		}
     }
}


