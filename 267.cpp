#include<stdio.h>
#include<conio.h>
int arr(int a[5])
{
	int max=0,min,i;
	for(i=0;i<5;i++)
	{
	  if(a[i]>max)
	  max=a[i];
	  if(a[i]<min)
	  min=a[i];
	}
	printf("\nmax=%d",max);
	printf("\nmin=%d",min);
}
int main()
{
	 int a[5],i;
	 for(i=0;i<5;i++)
	 {
	 printf("enter numbers:");
	 scanf("%d",&a[i]);
    }
	 arr(a);
	 
}
