#include<stdio.h>
struct stud{
	int id;
	char name[30];
	float per;
	int eng;
	int maths;
	int sci;
	
};

int main()
{
	
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
	
	s.per=s.eng+s.eng+s.eng/360*100;
	
	
	
	
   printf("id=%d",s.id);
   printf("/nname=%s",s.name);
   printf("/npercentage=%f",s.per);
	
	
}

