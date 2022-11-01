// slip no-9 second question
#include<stdio.h>
struct student
{
	char name[30];
	int id;
        struct doob
          {
          	int dd;
          	int mm;
          	int yy;
          	
		  }dob;
};
int main()
{
   struct student std;
   printf("enter name>>");
   scanf("%s",&std.name);
   
   printf("\nenter roll no");
   scanf("%d",&std.id);
   
   printf("\nenter date of birth in DOB [DD-MM-YY]format:");
   scanf("%d %d %d",&std.dob.dd,&std.dob.mm,&std.dob.yy);
   
   printf("\n name:%s \n roll no %d \nDOB : %d - %d -%d",std.name,std.id,std.dob.dd,std.dob.mm,std.dob.yy);
 	
}		  
