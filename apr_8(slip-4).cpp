#include<stdio.h>
struct client
{
	char name[30];
	int bno;
	int price;
	
};

 int main()
 {
 	struct client s[10];
 	int n,ch,id,i,max=0;
 	
 	
 	printf("enter the no. of books=");
 	scanf("%d",&n);
 	
 	for(i=1;i<=n;i++)
 	{
 		printf("enter book no>");
 		scanf("%d",&s[i].bno);
 		
 		printf("enter book name>>");
 		scanf("%s",&s[i].name);
 		
 		printf("enter book price>>");
 		scanf("%d",&s[i].price);
 		
 		 if(s[i].price>max)
	  {
	  	max=s[i].price;
	  }
	 }
	
	 
	 printf("\nenter your choice between 1 & 2");
	 scanf("%d",&ch);
	 switch(ch)
	  
	 {

	 
	 case 1: printf("\n books with price more than 500 are:");	
	 	
	 
	  for(i=1;i<=n;i++)
	{
	  	if(s[i].price>500)
	   {
	    printf("\n book no is %d",s[i].bno);
	    printf("name of book is %s",s[i].name);
	    printf("\nprice of book is %d",s[i].price);	
	    break; 
       }
    }
      case 2:   
	for(i=1;i<=n;i++)
	{
	  	if(s[i].price==max)
	   {
	    printf("\n book no is %d",s[i].bno);
	    printf("name of book is %s",s[i].name);
	    printf("\nprice of book is %d",s[i].price);	
	    break; 
       }
    }
	 
      }
  
}
