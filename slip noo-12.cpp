#include<stdio.h>
void arms(int);
int main()
{
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	arms(n);
}
void arms(int n)
{
	
	int a,sum=0,t;
	t=n;
	while(n>0)
	{
	
	a=n%10;
	sum=sum+(n*n*n);
	n=n/10;
    }
   if(sum==t)
   {               
 
	printf("armstrong number %d",t);   
   }
    else
   {	
    printf("not a amrstrong number %d",t);	
   }

}
