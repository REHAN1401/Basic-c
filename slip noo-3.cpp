//slip no 3 first question
#include<stdio.h>
int swapp(int,int);
int main()
{
	int a,b;
	printf("enter the value of a>>");
	scanf("%d",&a);
	
	printf("\n enter the value of b>>");
	scanf("%d",&b);
	
	swapp(a,b);
}
  int swapp(int a,int b)
{
	int c;
	c=a;
	a=b;
	b=c;
	printf("\n the swapped value of a is %d",a);
	printf("\n the swapped value of b is %d",b);
	
}
