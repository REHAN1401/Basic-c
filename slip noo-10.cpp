//slip no-10 first question
#include<stdio.h>
int main()
{
	int *a;
	int *b;
	int c;
	int n1,n2;
	printf("enter the number:");
	scanf("%d",&n1);
	
	printf("\n enter the number:");
	scanf("%d",&n2);
	a=&n1;
	b=&n2;
	c=*a+*b ;
	printf("\n additon is %d",c);
}
