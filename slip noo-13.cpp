//slip no-13 first question
#include<stdio.h>
void arm(int);
int main()
{
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	
	arm(n);
}
void arm (int n)
{
	int val,s=0,a;
	val=n;
	while(n>0)
	{
		a=n%10;
		s=s+(a*a*a);
		n=n/10;
	}
	if(val==s)
	{
		printf("%d is armstrong number",val);
	}
	else
	{
	printf("\n %d not an armstrong number",val);
    }
}

