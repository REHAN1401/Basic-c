#include<stdio.h>
int prime(int n);

int main()
{
	int n,i,val;
	printf("enter the number:");
	scanf("%d",&n);
	
	val=prime(n);	
	if(val==1)
	printf("%d it is a prime no:",n);
	else
	printf("%d it is not a prime no:",n);

}
  int prime(int n)
{
    int i,flag=1;
    for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			flag=0;
			break;
		}
			
	}	
   	if(flag==1)
   	return 1;
   	else
   	return 0;
}
