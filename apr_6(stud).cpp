#include<stdio.h>

struct stud
{
	char name[30];
	int roll;
	int marks[3];
	int per;

	
};
int main()
{
	int n,i,j,total=0;
	int perc=0;
	
	struct stud s[10];
	
	printf("enter no. of student=");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter name of students %d",i+1);
		scanf("%s",&s[i].name);
		
		printf("enter roll no of student =%d",i+1);
		scanf("%d",&s[i].roll);
   
	printf("enter the marks of 3 subjects");
	
	for(j=0;j<3;j++)
	{
		printf("marks of subject=");
		scanf("%d",&s[i].marks[j]);
		
		total=total+s[i].marks[j];
	   
	}
	
	
	perc = (total*100)/300;
	printf("%d",perc);
	
	s[i].per=perc;	
    printf("\npercentage =%d",s[i].per);	
 }
  
   
}
