#include<stdio.h>

void mul();

int main()
{
	mul();
}

    void mul()
	{
	int a,b,mul;
	printf("enter the number:");
	scanf("%d",&a);
	printf("enter the number:");
	scanf("%d",&b);
	mul=a*b;
	printf("\nmultiplication is:%d",mul);
	}
