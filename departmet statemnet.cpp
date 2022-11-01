#include<stdio.h>
int main()
{
	int id;
	
	printf("enter your id please:");
	scanf("%d",&id);
	
	switch(id)
	{
		case 199: printf("you are softwere engineer");
		break;
		
		case 200: printf("you are a developer");
		break;
		
		case 101: printf("you are a manager");
		
		default: printf(" please enter valid id");
		
	}
	
}
