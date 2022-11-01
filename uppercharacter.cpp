#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE*fp;
	FILE*fp2;
	char ch,temp;
	fp=fopen("hehe.txt","r");
	if(fp==NULL)
	{
		printf("error in opening file");
	}
	fp2=fopen("huihui.txt","w");
	if(fp2==NULL)
	{
		printf("error in opening file");
	}
	while(1)
	{
		ch=fgetc(fp);
		if(feof(fp))
		{
			break;
		}
		temp = ch-32;
		fputc(temp,fp2);
		printf("%c",temp);
		//fputc(ch,fp2);
	}
}
