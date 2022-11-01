#include<stdio.h>
#include<conio.h>
int  sum(int n);
int main()
{ 
 int n,s;
 printf("enter the number-->");
 scanf("%d",&n);
 
 s= sum(n);
 printf("the sum of digit %d",s);
}
int sum(int n)
{
	if(n>0)
	return(n%10+sum(n/10));
	else  
	return 0;
}
