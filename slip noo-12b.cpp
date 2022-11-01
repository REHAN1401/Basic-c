#include<stdio.h>
int main()
{
	 FILE *fp;
	 
	 fp=fopen("random.txt","w+");
	 
	 fclose(fp);
}
