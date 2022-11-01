#include<stdio.h>
int main()
{
	int ch,ch2;
	FILE *f1,*f2;
	
	f1=fopen("rehh.txt","r");
	f2=fopen("a.txt","r");
	
	if(f1==NULL || f2==NULL)
    {
    	printf("error in opening file:");
	}
	ch=fgetc(f1);
	ch=fgetc(f2);
	
	while(ch!=EOF && ch2!=EOF && ch==ch2)
	{
		ch=fgetc(f1);
		ch=fgetc(f2);
	}
	
	if(ch==ch2)
	{
		printf("contents are same");
	}
	else
	{
		printf("contents are not same");
	}
	fclose(f1);
	fclose(f2);
}
