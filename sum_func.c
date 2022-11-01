#include<stdio.h>

void add();

int main(){
	
	add();
	add();
}

void add(){
	int a,b,c;
	printf("Enter 1st no::");
	scanf("%d",&a);

	printf("Enter 2nd no::");
	scanf("%d",&b);
	
	c=a+b;
	
	printf("sum of two numbers is :: %d\n",c);

}
