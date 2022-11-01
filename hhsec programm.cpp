
#include<stdio.h>
int main()
{
	int hh,mm,sec;
	printf("enter the time in hh,mm,sec:");
	scanf("%d %d %d",&hh,&mm,&sec);
	/*
	printf("the entered time is %d:%d:%d\n",hh,mm,sec);
	
	if(hh>23)
	printf("the hour entered is wrong\n");
	
	else if(mm>59)
	printf("the minutes entered is wrong");
	
	else if (sec>59)
	printf("the seconds entered is wrong");
	
	else
	printf("yepeeeeeeeee!!!!!!great job.....");	
	
//give proper error	
	*/
	if(hh>23)
    printf("hours entered is not correct \n");
	if(mm>59)
	printf("minutes entered is not correct \n");
	if(sec>59)
	printf("secounds entered is not correct \n");	
	
	
	
	
	
	
	
}

