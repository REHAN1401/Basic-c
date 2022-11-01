#include<stdio.h>
void ams(int n);
void per(int n);
int main()
{
	int n;
	printf("enter the number-->");
	scanf("%d",&n);
	
	ams(n);
}
void ams(int n)
{
	int t,r,a,sum=0; 
	t=n;
	while(n>0)
	{
	a=n%10;
	sum=a*a*a+sum;
	n=n/10;	
	}
	if(sum==t)
	{
		printf("it is a amstrong");
	}
	else
	{
		printf("\nit is not a amstrong no");
		
	}
	
	void per(int n);
	{
		int sum=0,i;
		for(i=1;i<n;i++)
	   {
      
	    if(n%i==0)
	    sum=sum+i;
	    
	  }
		 if(sum==n)
		{
			printf("\nit is a perfect no");
		}
		else
		{
			printf("\nit is not a perfect no");
		}
      }
}

