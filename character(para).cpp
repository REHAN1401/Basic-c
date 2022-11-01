#include<stdio.h>
void character(char ch);
int main()
{
	char ch;
	printf("enter the character:");
	scanf("%c",&ch); 
	
	character(ch);	
	
}



void character(char ch)
{
	
  //char ch;
  int n,i,x;
  printf("enter the number:");
  scanf("%d",&n);
  
  for(i=1;i<=n;i++)
  {
	x=ch+i;
  	printf("%c",x);
  
}
}
