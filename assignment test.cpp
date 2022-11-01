#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter fisrt number\n");
	scanf("%d",&a);
	printf("enter second number\n");
	scanf("%d",&b);
    c=a;
    b=a;
    a=c;
    printf("\nthe swapped value are\n");
    printf("value of a=%d",a);
    printf("value of b=%d",b);
   	
}
