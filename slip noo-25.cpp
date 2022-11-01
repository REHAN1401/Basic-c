#include<stdio.h>
int main()
{
	 FILE *fp;
	 char ch;
	 
	 fp=fopen("rehh.txt","r");
	 
	 if(fp==NULL)
	 {
	 	printf("error in showing file:");
	 }
	 while(ch=fgetc(fp)!=EOF)
	 {
	 	ch = fgetc(fp);
	 	if((ch>=32 && ch<=127) || (ch>=58 && ch<=64 )|| (ch>=91 && ch<=96))
	 	{
	 		printf("special character%c\n",ch);
	    }    
     }
     fclose(fp);
}
