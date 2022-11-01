#include<stdio.h>

int main()
{
	float c,k,f;
	printf("enter the value of fahrenhite:");
	scanf("%f",&f);
	
	c=(0.55)*(f-32);
	printf("celcius>>%f",c);
	
	k=c+273.5;
	printf("kelvin>>%f",k);
}
