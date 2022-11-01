// slip no 6 first question
#include<stdio.h>
int sum(int);
int main()
{
	int n;
	printf("enter the number>>");
	scanf("%d",&n);
	
	sum(n);
}
int sum(int n)
{
	int s=0,r;
	while(n>0)
	{
		r=n%10;
		s=s+r;
		n=n/10;
	
	}
		printf("the sum of the number is %d",s);
	    return 0;
}
