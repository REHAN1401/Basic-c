#include<stdio.h>
int main()
{
	int i,x=1,n;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		x=x*i;
	}
	printf("\nthe factorial of %d  number is:%d",n,x);
	
	
	
}
