#include<stdio.h>
int main()
{
  int a[2][2],b[2][2],mul[2][2],i,j;
  
  printf("enter the 1st element:"); 
  for(i=0;i<2;i++)
   {
   	for(j=0;j<2;j++)
     {
     	scanf("%d",&a[i][j]);
	 }
   }
   
   printf("enter the 2nd element:"); 
  for(i=0;i<2;i++)
   {
   	for(j=0;j<2;j++)
     {
     	scanf("%d",&b[i][j]);
	 }
   }
   
  for(i=0;i<2;i++)
   {
   	for(j=0;j<2;j++)
     {
        printf("%d",mul[i][j]);
	 }
   }
   
   for(i=0;i<2;i++)
   {
   	for(j=0;j<2;j++)
     {
       mul[i][j]=a[i][j]*b[i][j];
	    printf("\nthe multiplication of matrices is:%d",mul[i][j]);
	 }
   }
}
