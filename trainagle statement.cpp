#include<stdio.h>
int main()
{
	int a,b,c;
printf("enter the values of triangle");
scanf("%d%d%d",&a,&b,&c);

if(a==b && b==c && c==a)
{
	printf("equilateral triangle");
}
else if(a==b || b==c || a==c
)
{
	printf("isoceles triangle");
}
else{
	printf("scalene triangle");
}
	
	
	
	
	
	
	
	
	
}
