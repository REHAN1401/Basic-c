//slip no 3 first question...
#include<stdio.h>
#include<conio.h>
int fact(int);
int main()
{
	int n,p;
	printf("enter a number>>");
	scanf("%d",&n);
	p=fact(n);
	printf("factorial=%d",p);
}
int fact (int n)
{
	int r;
	if(n==0)
	return 1;
	else
	r=n*fact(n-1);
	return r;
}
