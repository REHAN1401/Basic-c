//slip no 5 second question...

#include<stdio.h>
#include<conio.h>
struct item
{
	int ino;
	char iname[30];
	int price;
	
};struct item b[10];
int main()
{
int i,n,ch;
printf("enter no of items>>");
scanf("%d",&n);
{
	for(i=1;i<=n;i++)
	{
	printf("\nenter item no>>");
	scanf("%d",&b[i].ino);
	
	printf("\nenter item name>>");
	scanf("%s",&b[i].iname);
	
	printf("\n enter item price>>");
	scanf("%d",&b[i].price);
    }
 printf("\nenter your choice:");
 scanf("%d",&ch);
 
 switch(ch)
 {
    case 1:
 	for(i=1;i<=n;i++)
 	{
 	  if(b[i].price>800)
 	   {
 	    	printf("\nitem no:%d",b[i].ino);
 		    printf("\nitem name:%s",b[i].iname);
 		    printf("\nitem price:%d",b[i].price);
	   }
    }break;
	case 2:
		for(i=1;i<=n;i++)
		{
		  if(b[i].ino==2)
		  {	
		   printf("\nbook no:%d",b[i].ino);
 		   printf("\nbook name:%s",b[i].iname);
 		   printf("\nbook price:%d",b[i].price);	
		  }
		
        }
    }
	 
 }
}
