#include<stdio.h>
void change(int *a,int *b)	
{
	int tmp;
	
	tmp=*a;
	*a =*b;
	*b = tmp;
	

}

int main()
{
	int a,b;
	printf("enter numbers:");
	scanf("%d",&a);
	
	printf("enter numbers:");
	scanf("%d",&b);
	
	printf("value before change-%d %d",a,b);
	
	change(&a,&b);
	
	printf("value after change-%d %d",a,b);
}
