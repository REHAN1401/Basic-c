#include<stdio.h>
int demo(char ch);
int main()
{
	int n;
	char ch;
	printf("enter the character>>>=");
	scanf("%c",&ch);
	
	n=demo(ch);
	
	printf("%d",n);
	
	if(n==1)
	printf("it is a character");
	else if(n==2)
	printf("it is a number");
	else 
	printf("it is a special character");
}

int demo(char ch)
{
	if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
	{
		return 1;
	}
	else if(ch>='0'&& ch<='9')
	{
		return 2;
	}
	else
	{
		return 3;
	} 
		
}
















