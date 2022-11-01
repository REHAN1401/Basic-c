#include<stdio.h>
int main()
{
	int pass;
	
	printf("enter your password:");
	scanf("%d",&pass);
    
	switch(pass)
	{
		case 100:
		printf("welcome");
		break;
		
		default:
		printf("incorrect password");
			
	}	
	
}
