//slip no 1 first question
#include<stdio.h>

void sqr(int);
int main()	
{
	int n;
	printf("enter the number>>");
	scanf("%d",&n);
	
	sqr(n);
}
void sqr(int n)
{
	int s;
	s=n*n;
	printf("square of the number is %d",s);
}
