//b*b-4ac
#include<stdio.h>
int main()

{
	int a,b,c,d;
	printf("enter the value");
	scanf("%d%d%d",&a,&b,&c);
	d=b*b-4*a*c;
	if(d==0)
	printf("it is one solution:%d",d);
	else if(d>0)
	printf("it is real solution:%d",d);
	else
	printf("it is complex solution:%d",d);
	
	
	
	
	
	
	
	
}
