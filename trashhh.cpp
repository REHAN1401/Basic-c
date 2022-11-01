#include<stdio.h>
int main()
{
	char *p;
	int vC=0;
    int cC=0;
	char string[100];
	
	printf("enter the string>>");
	fgets(string,100,stdin);
	
	p=string;
	
	while(*p!='\0')
	{
		if(*p=='A'||*p=='E' ||*p=='I' ||*p=='O' ||*p=='U'
        		||*p=='a' ||*p=='e' ||*p=='i' ||*p=='o' ||*p=='u')
            vC++;
            
        else
		    cC++;
	   p++;		    
	}
	printf("no of vowels are %d",cC);
	printf("no of constant are %d",vC);
	return 0;
	
}
