#include<stdio.h>
int main()
{
	int a[100];
	int n,i,count=0,val;
	
	printf("no of times to be printed:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	  {
	  	scanf("%d",&a[i]);
	  }
	  
	     for(i=0;i<n;i++)
	      {
	  	   printf("%d",&a[i]);
	      }
	   
	 printf("enter the number of occuernce:");
	 scanf("%d",&val);
	 
	 for(i=0;i<n;i++)
	  {
	  	if(a[i]==val)
	  	count++;
	  }
	 
	printf("the %d no of occurence %d time is",val,count);
	   
}
