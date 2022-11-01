//slip no 5 first question
#include<stdio.h>
void febo(int);
int main()
{
	int r;
	printf("enter the range>>");
	scanf("%d",&r);
	
	febo(r);
	
}
void febo(int r)
{
	int a=0,b=1,i,c;
	for(i=0;i<r;i++)
	{
		printf("%d",a);
		c=a+b;
		a=b;
		b=c;
		
	}
	
}
