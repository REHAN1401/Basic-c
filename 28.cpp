
#include<stdio.h>
#include<conio.h>
void per(int a);
int total(int a[]);
int main()
{
	int a[5],i,sum=0,tota ;
	printf("enter the marks:");
	for(i=0;i<5;i++)
	{
	scanf("%d",&a[i]); 
    }
    sum=total(a);
    per(sum);
  
}
 int total(int *a)
 {
 	int sum=0,i;
 	for(i=0;i<5;i++)
 	{
 		sum+=a[i];
 		
	 }
	 printf("sum=%d",sum);
	 return sum;
	 
 }
 void per(int sum)
 {
 	int p;
 	p=(sum/5)*100;
 	printf("percentage is=%d",p);
 }
