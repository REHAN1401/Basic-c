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
		if(EOF(fp))
		{
			break;
		}
		ch=fgetc(fp)
		temp=strup(ch);||temp=ch-32;
		fputc(temp,fp);
	}
}
