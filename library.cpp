#include<stdio.h>
int main()
{
	int days,fine;
	printf("enter the number of days\n");
	scanf("%d",&days);
	
	if(days>0 && days<=5){
	fine=5*days;
	printf("your fine is:%d",fine);}
	
	else if(days>=6 && days<=10){
	fine=10*days;
	printf("your fine is:%d",fine);}
	
	else if(days >10){
	fine=15*days;
	printf("your fine is:%d",fine);}
	
	else
	{
	printf("you have tp pay double the amt of book is");}
	
}
