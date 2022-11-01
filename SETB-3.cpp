#include<stdio.h>
int main()
{
	int a,b,c,r;
	printf("enter the amount for withdrawn");
	scanf("%d",&c);
	{
		a=(c/10);
		printf("10 rupees notes:%d\n",a);
		r=c%10;
		b=r/5;
		printf("5 rupees notes:%d\n",b);
		b=r%5;
		//c=b/1;
		printf("1 rupees notes:%d\n",b);
	}

}
