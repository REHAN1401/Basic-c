#include<stdio.h>
int main()
{
	int a[100],i,n,sum=0;
	printf("enter the limit:");
	scanf("%d",&n);
	
	printf("enter the numbers:");
	
	for(i=0;i<n;i++)
   {
   	scanf("%d",&a[i]);
       {
	 	if(a[i]%2==0)
	 	  {
	 	 	//printf("%d",a[i]);
	 	 	sum=sum+a[i];
		  }
       }
   }
	printf("\nthe sum of all even numbers is:%d",sum);
}

