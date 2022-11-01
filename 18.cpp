#include<stdio.h>
#include<stdlib.h>
int main()
{
	 FILE *fp,*fp2;
	 int cnt=1;
	 char ch;
	 
	 fp=fopen("hi.txt","r");
	 fp2=fopen("hii.txt","w");
	 
	 if(fp==NULL || fp2==NULL)
	 {
	 	 printf("error in opening file:");
	 	 exit(1);
	 }
	 while(1)
	 {
	 	ch = fgetc(fp);
	 	if(ch == EOF){
	 		break;
		 }
	 	if(ch=='\n');
	 	{
	 		cnt++;
		}
	 }
	 printf("%d",cnt);
	 fclose(fp);
	 fclose(fp2);
	 
}
