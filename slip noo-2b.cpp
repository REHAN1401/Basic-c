+//slip no 2 second question
#include<stdio.h>
#include<conio.h>
struct stud
{
	int id;
	int marks;
	char name[30];
};
int main()
{
 struct stud s[10];
 int n,i,ch,d;
 
 printf("enter number of students:");
 scanf("%d",&n);
 
 for(i=1;i<=n;i++)
 {
 printf("\nenter student id>>");
 scanf("%d",&s[i].id);
 
 printf("\nenter student name>>");
 scanf("%s",&s[i].name);
 
 printf("\n enter student marks>>");
 scanf("%d",&s[i].marks);
 }
  printf("\nenter your choice>>>");
  scanf("%d",&ch);
  
  switch(ch)
  {
  	case 1:
  		printf("enter student id>>");
  		scanf("%d",&d);
  		
  		for(i=1;i<=n;i++)
  		{
  			if(d==s[i].id)
  			{
  				printf("\nstudent name=%s",s[i].name);
  				printf("\nstudent marks=%d",s[i].marks);
			}
			
		}
		break;
		case 2:
			for(i=1;i<=n;i++)
			{
				printf("\nstudent id=%d",s[i].id);
				printf("\nstudent name=%s",s[i].name);
  				printf("\nstudent marks=%d",s[i].marks);
			} 
  }
  

}

