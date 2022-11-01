#include<stdio.h>

	union sam
	{
		int m;
		char ch;
		float n;
	};
	int main()
	{
	union sam u;
	
	printf("the size of the union is %d \n",sizeof(u));
	u.m=25;
	printf("%d %f %c \n",u.m,u.n,u.ch);
	u.n=0.2;
	printf("%d %f %c \n",u.m,u.n,u.ch);
	u.ch='p';
	printf("%d %f %c \n",u.m,u.n,u.ch);
}
