#include<stdio.h>
struct stud{
	int id;
	char name[30];
	float per;
};

int main()
{
	struct stud s;
	printf("enter id=");
	scanf("%d",&s.id);
	
	printf("enter name=");
	scanf("%s",&s.name);
	
	printf("enter percentage=");
	scanf("%f",&s.per);
	
   printf("id=%d",s.id);
   printf("/nname=%s",s.name);
   printf("/npercentage=%f",s.per);
	
	
}

