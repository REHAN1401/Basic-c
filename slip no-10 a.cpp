#include<stdio.h>
int main()
{
	int x,y;
	
	printf("enter the value of x & y coordinates:");
	scanf("%d%d",&x,&y);
	
	if(x>=0 && y>=0)
	printf("\nlies in 1st quadrant:%d %d",x,y);
	
	if(x<0 && y>=0)
	printf("\n lies in 2nd quadrant:%d %d",x,y);
	
	if(x<0 && y<0)
	printf("\n lies in 3rd quadrant:%d %d",x,y);
	
	if(x>=0 && y<0)
	printf("\n lies in 4th quadrant:%d %d",x,y);
	
	if(x==0)
	printf("it lies in y quadranrt\n");
	
	if(y==0)
	printf("it lies in x quadrant\n");
	
}
