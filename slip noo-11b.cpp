#include<stdio.h>
int main()
{
	 int ch;
	 int cnt=0;
	 FILE *fp;
	 fp=fopen("slipno11.txt","r");
	 if(fp==NULL)
	 {
	 	printf("error in opening file");
	 	
	 }
	 while((ch=fgetc(fp))!=EOF)
	 {
	 	if(ch=='\n')
	   {
	   	cnt++;
	   }
     }
     fclose(fp);
     printf("%d",cnt);
	 
}
