#include<stdio.h>
int main()
{
	int n,n1,a,b,sum,value,i,j;
	printf("enter the number:");
	scanf("%d",&n);
	printf("enter the number:");
	scanf("%d",&n1);
	
	
	for(i=n;i<=n1;i++)
	{
	 value=i;
    sum=0;	
	while(value>0)
	{
	a=value%10;
	sum=a*a*a+sum;
	value=value/10;	
		
	}	
     if(sum==i)
	 printf("%d\n",i);		
    }		
 }
	
	

