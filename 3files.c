#include<stdio.h>
#include<string.h>
main()
{
	FILE *f1;
	char x[20];
	int n,i,m;
	
	printf("Enter the no of students: ");
	scanf("%d",&n);
	printf("enter %d names and marks:\n",n);
	f1=fopen("t2.txt","w");
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		gets(x);
		scanf("%d",&m);	
		fputs(x,f1);
		fprintf(f1,"\n");
		fprintf(f1,"%d",m);
	}
	fclose(f1);
	printf("\n\nThe values in the file are:\n");
	f1=fopen("t2.txt","r");
	while(!feof(f1))
	{
		fscanf(f1,"%s %d",x,&m);
		printf("%s\n%d\n",x,m);
	}
	fclose(f1);
}
