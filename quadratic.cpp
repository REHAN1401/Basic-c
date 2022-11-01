#include<stdio.h>
int main()
{
	int x,y;
	printf("enter the value of x and y coordinate:\n");
	scanf("%d%d",&x,&y);
	
	if(x>=0&&y>=0)
	printf("lies in 1st quadrant:%d%d\n",x,y);
	if(x<0&&y>=0)
    printf("lies in 2nd quadrant:%d%d\n",x,y);	
	if(x<0&&y<0)
	printf("lies in 3rd quadrant:%d%d\n",x,y);
	if(x>=0&&y<0)
	printf("lies in 4th quadrant:",x,y);
	if(x==0)
	printf("it lies on y quadrant/n");
	if(y==0)
	printf("it lies on x quadrant/n");
	
	
	
	
	
	
}
