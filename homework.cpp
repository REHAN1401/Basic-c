#include<stdio.h>
int main()
{
   char op;
   int num1,num2,result;
   printf("please enetr an operator (+,-,*,/):\n");
   scanf("%c",&op);
   printf("please enter the first value:");
   scanf("%d",&num1);
   printf("please enter the second value:");
   scanf("%d",&num2);
   
   switch(op)
   {
   	 case'+':
	printf("result=%d",num1+num2);
   	 break;
   	 
   	 case'-':
	printf("result=%d",num1-num2);
   	 break;
   	 
   	 case'*':
	printf("result=%d",num1*num2);
   	 break;
   	 
   	 case'/':
	printf("result=%d",num1/num2);
   	 break;
   	 
   	 default:printf("please select from above given operators/n");
   	
   	
   	
   	
   	
   	
   	
   	
    }	
	
	
	
	
	
	
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

