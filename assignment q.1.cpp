#include<stdio.h>
int main()
{
	int a[100][100],r,c,i,j,sum=0,odd=0;
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
	      	continue;	      	
		  }
		  else 
		 {
		 	sum=sum+a[i][j];     //non diagnol addition
		 }	
	}
     
}
    printf("the sum non diagnol is:%d\n",sum);
	
	 for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
	  {	
	      if(a[i][j]%2==0)
	      {
	      	continue;	      	
		  }
		  else 
		 {
		 	odd=odd+a[i][j];     //non diagnol addition
		 }	
	}
     
}
    printf("the sum od odd no. is~~~:%d\n",odd);
	
}
