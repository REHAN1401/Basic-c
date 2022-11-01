#include<stdio.h>
int main()
{
  FILE *fp,*fpt;
  char ch1,ch2;
  
  fp=fopen("hi.txt","r");
  fpt=fopen("hii.txt","w");
  
  if(fp==NULL || fpt==NULL)
  {
  	printf("error");
  }
  ch1=fgetc(fp);
  ch2=fgetc(fpt);
  
  while(ch1!=EOF && ch2!=EOF && ch1==ch2)
  {
  	{
     ch1=fgetc(fp);
     ch2=fgetc(fpt);
  	}
  	if(ch1==ch2)
  	{
  		printf("content are same:");
	  }
	 else
	 {
	 	printf("not same:");
	  } 
  }
  fclose(fp);
  fclose(fpt);
}
