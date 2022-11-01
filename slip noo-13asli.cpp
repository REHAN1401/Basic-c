#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *p;
	char data[30];
	int i;
	printf("enter some data:");
	gets(data);
	
	p=fopen("copy1.txt","w");
	i=0;
	if(p==NULL)
	{
		printf("error in opening:");
    }
    while(data[i]!='\0')
    {
    	fputc(data[i],p);
    	i++;
	}
	fclose(p);
} 
    
