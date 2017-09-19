#include<stdio.h>
main()
{
	FILE *f1;
	char x;
	f1=fopen("t1.txt","w");
	printf("Enter some data to stop entering a data enter a '/'\n");
	fflush(stdin);
	x=getchar();
	while(x!='/')
	{
		fputc(x,f1);
		x=getchar();
	}
	fclose(f1);
}

