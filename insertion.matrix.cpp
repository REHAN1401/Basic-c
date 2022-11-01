#include<stdio.h>
int main()
{
	int a[100][100],r,c,i,j,sum=0,sum1=0;
	printf("enter rows:");
	scanf("%d",&r);
	printf("enter column:");
	scanf("%d",&c);
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		 {
		 	scanf("%d",&a[i][j]);
		 }			
	}
	  
	   for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		 	printf("%d\t",a[i][j]);
		}
            printf("\n");	
						
	}	


    for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
	  {
	
	    if(i==j)
		 {
            sum=sum+a[i][j];
		 }		
		 else
		 {
		 	sum1=sum1+a[i][j];
		 }	
	}
     
}
    printf("the sum is:%d\n",sum);
    printf("the sum is:%d\n",sum1);
	
}
