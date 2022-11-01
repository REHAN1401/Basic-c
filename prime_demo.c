#include<stdio.h>
int main()
{
	int a,b,i,j,flag=1;
	 printf("enter the number:");
	scanf("%d",&a); 
	
	printf("enter the number:");
	scanf("%d",&b);
	
	for(i=a;i<b;i++)
	{
		flag=1;
		for(j=2;j<i;j++)
		
	{
			if(a%i==0)
			{
				flag=0;	
				break;	
			}
			
	}
	
	if(flag==1)
		printf("%d\n",i);	
    }
    
}
