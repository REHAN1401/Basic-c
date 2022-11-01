#include<stdio.h>
int main()
{
	int a[]={7,13,21,16,9,37,24};
	int i,large;
    large=a[0];
    
    for(i=1;i<7;i++)
    {
    	if(a[i]>large) 	
		{
		large=a[i];
		}
    }
	printf("largest value is:%d",large);
	
}
	
	

