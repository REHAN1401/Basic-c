#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	char temp;
	fp=fopen("hehe.txt","w+");
	if(fp==NULL)
	{
		printf("error in opening file:");
	}
	while(1)
	{
		if(feof(fp))
		{
			break;
		}
		ch=fgetc(fp);
		temp=strupr(ch);
		fputc(temp,fp);
	}
}
