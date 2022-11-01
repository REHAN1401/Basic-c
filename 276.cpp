#include<stdio.h>
#include<stdio.h>
int add(int a,int b)
{
	printf("addition:",a+b);
}

 int main()
 {
 	 int a,b,ch;
 	 printf("enter two number:");
 	 scanf("%d %d",&a,&b);
 	 while(1)
 	 {
 	 	printf("\n1=add");
 	 	printf("\n2=exit");
 	 	
 	 	printf("\nenter your choice:");
 	 	scanf("%d",&ch);
 	 	switch(ch)
 	 	{
 	 		case 1:
 	 			   add(a,b);
 	 			   break;
 	 	    case 2:
			       exit(1);		   
		}
	}

}

