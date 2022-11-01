#include<stdio.h>

void change (int a,int b)	
{
	int temp;
	temp=a;
	a=b;
	b=temp;

}

int main()
{
	int a,b;
	printf("enter numbers:");
	scanf("%d%d",&a,&b);
	
	printf("value before change-%d,%d",a,b);
	change(a,b);
	
	printf("value after change-%d,%d",a,b);
}
