#include<stdio.h>
main()
{
	FILE *f1;
	f1=fopen("teach.txt","w");
	char c[20];
	gets(c);
	fputs(c,f1);
	fclose(f1);
}
