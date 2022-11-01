#include<stdio.h>
int main()
{
	int x,y,i,ans;
	
	ans=1;
	printf("enter the number:");
	scanf("%d",&x);
	printf("enter the power:");
	scanf("%d",&y);
	
	for(i=1;i<=y;i++)
	{
	ans=ans*x;
	}
	
	printf("%d to power % is %d ",x,y,ans);	
	
}
