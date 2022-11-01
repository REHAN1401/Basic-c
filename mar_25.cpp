#include<stdio.h>
void febo(int r);
int main()
{
	int r;
	printf("enter the range-->");
	scanf("%d",&r);
	febo(r);
}
void febo(int r)
{
	int a=0,b=1,c,i;
	for(i=0;i<r;i++)
	{
		printf("%d",a);
		c=a+b;
		a=b;
		b=c;
	}
}
