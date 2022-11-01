#include<stdio.h>
#include<conio.h>
int main()
{
	 int max=0,min ;
	 int a[5],i;
	 for(i=0;i<5;i++)
	 {
	 printf("enter the number:");
	 scanf("%d",&a[i]);
	 
	 if(a[i]>max)
	 {
	 	max=a[i];    
	 }
	    if(a[i]<min)
	 	min=a[i];
     }
	 printf("\nmax=%d",max);
	 printf("\nmin=%d",min);
	 
}
