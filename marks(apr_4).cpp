#include<stdio.h>
struct stud{
	int id;
	char name[30];
	int eng;
	int maths;
	int sci;
	
};

int main()
{
	int per;
	int total=0;
	
	struct stud s;
	printf("enter id=");
	scanf("%d",&s.id);
	
	printf("enter name=");
	scanf("%s",&s.name);
	
	
	printf("enter marks of english=");
	scanf("%d",&s.eng);
	
	printf("enter marks of maths=");
	scanf("%d",&s.maths);
	
	printf("enter marks of science=");
	scanf("%d",&s.sci);
	
	total=s.eng+s.sci+s.maths;
	
	per=total*100/300;
	
	
	
	
   printf("id=%d",s.id);
   printf("\nname=%s",s.name);
   printf("\n total marks=%d",total);
   printf("\npercentage=%d",per);
	
	
}
