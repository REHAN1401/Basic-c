#include<stdio.h>

void accept(int *a)
{
   int i;
   printf("Enter the elements of the array:\n");
   for(i=0;i<3;i++)
    {
    	scanf("%d",&a[i]);
	  }  
}
  
void display(int *p)
{
   int i;
   printf("\nthe value entered in an array is:\n");
   for(i=0;i<3;i++)
    {
    	printf("%d\n",p[i]);
	}  
} 

void sum(int*a,int*b,int*c)
{
	int i;
	for(i=0;i<3;i++)
	{
	  c[i]=a[i]+b[i];	 
	}
		
}
 int main()
{
	int a[3],b[3],c[3],i;
	accept(a);
	display(a);
    accept(b);
	display(b);
	sum(a,b,c);
    display(c);
	
}	


 
  

  	
 
 
