#include<stdio.h>
int even(int n);

int main()
{
  int n;
  printf("enter the number:");
  scanf("%d",&n);
  even(n);
  if(n%2==0)
  printf("even no");
  else 
  printf("odd no");
}

 int even(int n)
 {
 if(n%2==0)
 return 0;
  	
 else	
 return 1;
  
}
 
 
 
