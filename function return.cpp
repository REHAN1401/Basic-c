#include<stdio.h>

int max(int num1,int num2,int num3);

int main()
{
	int a,b,c,n;
	printf("enter the no:");
	scanf("%d",&a);
	printf("enter the no:");
	scanf("%d",&b);
	printf("enter the no:");
	scanf("%d",&c);
	n=max(a,b,c);
	printf("max=%d",n);
	
}

int max(int a,int b,int c)
{
  	if(a>b && a>c)
  	return a;
  	
  	if(b>a && b>c)
  	return b;
  	
  	if(c>a && c>b)
  	return c;
  	
}
	
