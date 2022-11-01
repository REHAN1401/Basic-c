//Write a C program to add two numbers using pointers. 

#include<stdio.h>
int main()
{
	int *a;
	int *b;
	int c;
	int p,q;
	printf("enter number 1:");
	scanf("%d",&p);
	printf("\nenter number 2:");
	scanf("%d",&q);
    a=&p;
    b=&q;
		
	c=*a+*b;
	printf("additin of number is:%d",c);
}

