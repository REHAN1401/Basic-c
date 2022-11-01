#include<stdio.h>
int main()
{
	int num1,operator,num2;
	{
		printf("enter the first number:\n");
		scanf("%d",&num1);
		printf("enter operator:\n");
		scanf("%d",&operator);
		printf("enter second number:\n");
		scanf("%d",num2);
		
		switch (num1,num2,operator){
			case 1: printf("num1+num2");
			break;
			
			case 2: printf("num1*num2");
			break;
			
			case 3: printf("num1-num2");
			break;
			
			case 4: printf("num1/num2");
			break;
			
		    default:
		    	    printf("the operatar is not from the list");
		}
		
		
	}
		    	
		
