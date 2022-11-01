#include<stdio.h>
int main ()
{
	float a,b,am,hm;
	printf("enter the value of a \n");
	scanf("%f",&a);
	printf("enter the value of b \n");
	scanf("%f",&b);
	am= (a+b)/2;
	hm= a*b/(a+b);
	printf("am of two numbers:%f",am);
	printf("hm of two numbers:%f",hm);	
}
