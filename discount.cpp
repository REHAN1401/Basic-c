#include<stdio.h>
int main()
{
	int amt,dis,famt;
	printf("enter the amount:\n");
	scanf("%d",&amt);
	
	if(amt>2500)
	{
	dis=amt*0.20;
	famt=amt-dis;
	printf("here is your final amt!!thank you:%d\n",famt);
	}
    else if(amt>1700 && amt<=2500)
	{
	dis=amt*0.15;
	famt=amt-dis;
    printf("here is your final amt!!thank you:%d\n",famt);
	}  
    else if(amt>1000 && amt<=1700)
    {
	dis=amt*0.08;
	famt= amt-dis;
	printf("here is your final amt!!thank you:%d\n",famt);
	}
    else
	{ 
	printf("no discount is given!!thank you\n");
	}	
}
