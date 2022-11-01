 //slip no 2 first question
#include<stdio.h>
#include<conio.h>
void oe(int);
int main()
{
	int n;
	printf("enter the number>>");
	scanf("%d",&n);
	
	oe(n);
}
void oe(int n)
{
	if(n%2==0)
	{
		printf("even no");
	}
	else 
	{
		printf("odd no");
	}
}
