#include<stdio.h>
int main()
{
	FILE *fp,*fpt;
	char ch;
	char temp;
	
	fp=fopen("copy.txt","r");
	fpt=fopen("copy1.txt","w");
	
	if(fp==NULL || fpt==NULL)
	{
		printf("error in opening file\n");
	}
	while(1)
	{
		ch=fgetc(fp);
		if(ch==EOF)
		{
		  break;
	    }
	    printf("%c",ch);
	    temp=ch-32;
	    fputc(temp,fpt);
	    printf("%c",temp);
    }
}
