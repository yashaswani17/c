#include<stdio.h>
main()
{
	FILE *f1;
	char x;
	printf(" the data in the file was:\n");
	f1=fopen("t1.txt","r");
	while(!feof(f1))
	{
		x=fgetc(f1);
		putchar(x);
	}
	fclose(f1);
}

