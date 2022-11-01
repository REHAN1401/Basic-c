#include<stdio.h>


  void changes(int *a,int *b)
   {
   	int temp;
   	temp=*a;
   	*a=*b;
   	*b=temp;
   	
 }
int main()
{
	int a,b;
	printf("enter the values");
	scanf("%d%d",&a,&b);
	printf("values before change-%d,%d",a,b);
	changes(&a,&b);
	printf("values after change-%d,%d",a,b);
}

   	
   	
   
	
	
	
	
	
	
	

