//write a programm to check weather the no. is divisible by 5&7
#include<stdio.h>
int main()
{
	int a;
	printf("enter the value:");
	scanf("%d",&a);
	
	if((a%5==0)&&(a%7==0))
	printf("the value is divisible by 5 and 7 both");
	else if (a%7==0)
	printf("the value is divisible by 7 but not by 5");
	else if (a%5==0)
	printf("the value is divisible by 5 but not 7");
	else
	printf("not divisible by either 5 or 7");
	
	
	
	
	
	
	
}
