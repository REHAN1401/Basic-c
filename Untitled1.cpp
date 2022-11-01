#include<stdio.h>
int main()
{
	float l,b,h,area,volume;
	printf("enter the length \n");
	scanf("%f",& l);
	printf("enter the breadth \n");
	scanf("%f",& b);
	printf("enter the heightn\n");
	scanf("%f",& h);
	area = 2*( l*b + l*h + b*h);
	volume = l*b*b;
	printf("surface area of cuboid:%f",area);
	printf("volume of cuboid:%f",volume);
	
	
	
	
	
	
}
