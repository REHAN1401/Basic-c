
#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the number:");
	scanf("%d",&n);
	
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		break;	
	}	
	if(i==n)
	printf("it is a prime no");
	else
	printf("it is not a prime no");

}


