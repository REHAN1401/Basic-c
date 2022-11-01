//slip no 4 second question...
#include<stdio.h>
#include<conio.h>
struct book
{
	int bno;
	char bname[30];
	int price;
	
};struct book b[10];
int main()
{
int i,n,ch,max=0;
printf("enter no of books>>");
scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	printf("\nenter book no>>");
	scanf("%d",&b[i].bno);
	
	printf("\nenter book name>>");
	scanf("%s",&b[i].bname);
	
	printf("\n enter book price>>");
	scanf("%d",&b[i].price);
	
	if(b[i].price>max)
	  {
		max=b[i].price;
	  }
    }
 printf("\nenter your choice:");
 scanf("%d",&ch);
 
 switch(ch)
 {
    case 1:
 	for(i=1;i<=n;i++)
 	{
 	  if(b[i].price>500)
 	   {
 	    	printf("\nbook no:%d",b[i].bno);
 		    printf("\nbook name:%s",b[i].bname);
 		    printf("\nbook price:%d",b[i].price);
	   }
    }break;
	case 2: printf("book with maximum price is \n");
		for(i=1;i<=n;i++)
		{
		  if(max==b[i].price)
		  {
		    printf("\nbook no:%d",b[i].bno);
 		    printf("\nbook name:%s",b[i].bname);
 		    printf("\nbook price:%d",b[i].price);	
		  }
		
        }
	 
   }
  } 

