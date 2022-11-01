#include<stdio.h>
int main()
{
	int v1,v2,v3;
	printf("enter three values");
	scanf("%d %d %d",& v1, &v2, &v3);
	if((v1>v2 && v1<v3)||(v1>v3 && v1<v2))
	printf("the middle value is %d",v1);
	else if ((v2>v1 && v2<v3)||(v2>v3 && v2<v1))
	printf("the middle value is %d",v2);
	else if((v3>v2 && v3<v1)||(v3>v1 && v3<v2))
	printf("the middle value is %d",v3);	
	
	
	
	
	
}
