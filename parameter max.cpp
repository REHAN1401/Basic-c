#include<stdio.h>

void max(int num1,int num2,int num3);

int main()
{
	int a,b,c;
	printf("enter the 3 no:");
	scanf("%d%d%d\n",&a,&b,&c);
	max(a,b,c);
	
}

void max(int a,int b,int c)
{
  	if(a>b && a>c)
  	printf("%d",a);
  	
  	if(b>a && b>c)
  	printf("%d",b);
  	
  	if(c>a && c>b)
  	printf("%d",c);
  	
}
	
	
	
	
	
	
	
	
	
	

