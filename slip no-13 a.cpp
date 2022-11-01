#include<stdio.h>
int main()
{
  int l,i,sum=0;
  
  printf("enter your limit:");
  scanf("%d",&l);
   
  for(i=1;i<=l;i++)
  {
  	if(!(i%2)==0)
  	sum=sum+i;
   }
   printf("sum of odd no =%d",sum);
}

  
