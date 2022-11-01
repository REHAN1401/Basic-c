// slip no 7 first question
#include<stdio.h>
#include<conio.h>
int swap(int,int);
int main()
{
	int a,b;
	printf("enter the value of a>>");
	scanf("%d",&a);
	
	printf("enter the value of b>>");
	scanf("%d",&b);
	
	swap (a,b);
}
int swap(int*a,int*b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
   printf("a=%d",*a);
   printf("b=%d",*b);
}

