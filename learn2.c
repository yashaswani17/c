#include<stdio.h>
#include<string.h>
main()
{
	FILE *f1;
	f1=fopen("teach.txt","r");
	char c[20];
	//while((c=fgetc(f1))!=EOF)
	fgets(c,20,f1);
	printf("%s",c);
	fclose(f1);
}

