#include<stdio.h>
void pri(int);
int main()
{
	int n;
	printf("eter the number:");
	scanf("%d",&n);
	pri(n);
}
void pri(int n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if(n%2==0)
		break;

	}
	if(n==i)
	{
		printf("prime no:");
	}
	else
	{
		printf("not a prime no:");
	}
}
