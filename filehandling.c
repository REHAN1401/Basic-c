#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("rehh.txt","r");
	while(1)
	{
		ch=fgetc(fp);
		if(feof(fp))
		break;
			
		printf("%c",ch);
	}
	fclose(fp);
}
