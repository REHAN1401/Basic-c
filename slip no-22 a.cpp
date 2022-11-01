#include<stdio.h>
int main()
{
 int i,j,n,ch;
 printf("enter the number of rows:");
 scanf("%d",&n);
 
 for(i=n;i>=1;i--)
  {
  	//ch='A';
  	for(j=0;j<i;j++)
	  {
	  	
	  	//ch=ch+j;
	  	printf("%c",'A'+j);
	}
       printf("\n");
  }
  
}
