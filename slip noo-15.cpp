#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	
	fp=fopen("copy1.txt","r");
	if(fp==NULL)
	{
		printf("error in oprning file:");
		return 0;
	}
	while(ch=fgetc(fp)!=EOF)
	{
		printf("%c",ch);
	}
	fclose(fp);
	return 0;
}
}


