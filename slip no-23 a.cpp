#include<stdio.h>
int main()
{
 int a[100],n,i,j=0;
 
 printf("enter the limit:");
 scanf("%d",&n);
 
 printf("enter the elements of array:");
  
   
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);	
  } 
  
  for(i=0;i<n;i++)
  {
  	j+=a[i];
  }
  
  printf("sum of array is:%d",j);
  
}
