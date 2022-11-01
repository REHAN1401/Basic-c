#include<stdio.h>
void prime(int n);
int main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	
	prime(n);
}

 void prime(int n)
   {
 	int i;
 	for(i=2;i<=n;i++)
 	{
 		if(n%i==0)
 		break;
    }
        if(n==i){
 		printf("prime number");}
		else {
        printf("not a prime number");}

		 
   }
 
