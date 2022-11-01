#include<stdio.h>
struct stdu
{
	 char name[30];
	 int adate;
	 int bdate;
	 int id;
};
int main()
{
	struct stdu s[30]; 
	int i,c=0,n;
	printf("enter no. of students:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
	  printf("\nenter student id:");
	  scanf("%d",&s[i].id);	
	  printf("\nenter the name of student:");
	  scanf("%s",&s[i].name);
	  printf("\nenter addmission date:");
	  scanf("%d",&s[i].adate);
	  printf("\nenter date of birth:");
	  scanf("%d",&s[i].bdate);	
	}
	
	for(i=1;i<=n;i++)
	{	
	c=s[i].adate-s[i].bdate;
	printf("age at the time of addmission is:%d\n",c);
    }
}
