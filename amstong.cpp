#include<stdio.h>
int main()
{
	int n,a,sum,value;
	printf("enter the number:");
	scanf("%d",&n);
	
	value=n;
    sum=0;
	for(;n>0;)
	{
	a=n%10;
	sum=a*a*a+sum;
	n=n/10;		
	}
	if(value==sum)
	printf("%d is a amstrong no",value);
	else
	printf("%d is not a amstrong no",value);	
}
