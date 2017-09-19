#include<stdio.h>
struct student
{
	char name[20];
	int mark;
};
main()
{
	int i,n,a=0;
	FILE *f;
	f=fopen("student.txt","w");
	printf("Enter the no of students: ");
	scanf("%d",&n);
	struct stud bca[n];	
	for(i=0;i<n;i++)
	{
		printf("\nEnter the details of student %d\n",++a);
		printf("Enter Name: ");
		scanf("%s",bca[i].name);
		printf("Enter marks: ");
		scanf("%d",&bca[i].mark);
		fprintf(f,"%s\n%d\n",bca[i].name,bca[i].mark);
	}
	fclose(f);
	printf("\n\nThe details in the files are:\n");
	char r[50];
	f=fopen("student.txt","r");
	while(fgets(r,50,f)!=NULL)
	{
		printf("%s",r);
	}
	fclose(f);
}
