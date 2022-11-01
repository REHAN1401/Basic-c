#include<stdio.h>
int main()
{
	int eng,acc,eco,avg;
	printf("enter marks of eng:\n");
	scanf("%d",&eng);
	printf("enter marks of eco:\n");
	scanf("%d",&eco);
	printf("enter marks of acc:\n");
	scanf("%d",&acc);
	
	avg=((eng+eco+acc)/3); 
	printf("the total avg of all three subjects:%d\n",avg);
	
	if(avg>=75){
	printf("you got A grade!!!!great job((:\n");}
	
	else if(avg>=65){
	printf("you got B grade!!!!need improvments||:\n");}
	
	else
	{
	printf("you are failed!!!!work hard)):\n");}	
	
}
