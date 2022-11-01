#include<stdio.h>

void accept(int*a)
{
 	int i;
 	
 	for(i=0;i<10;i++)
 	 {
 		scanf("%d",&a[i]);
	 }
 	
}


void print(int*a)
{
 	int i;
 	
 	for(i=0;i<10;i++)
 	 {
 		printf("%d",a[i]);
	 }
 	
}	


int main()
{
	int a[10];	
	accept(a);	
	print(a);
}
	
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
