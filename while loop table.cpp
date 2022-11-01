#include<stdio.h>
int main()
{
	int i,n,result;
	i=1;
	printf("enter the number");
	scanf("%d",&n);
	
	while(i<=10)
	{
		result=n*i;
		printf("%d x %d = %d\n",n,i,n*i);
		i++;
		
    }
	
}
