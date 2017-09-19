#include<stdio.h>
struct student
{
	char name[100];
}details[3];
void display(struct student details[]);
main()
{
	//struct student detail[3];
	display(details);
}
void display(struct student details[])
{
	int i;		
	for(i=0;i<3;i++)
	{
		printf("\nenter name: ");
		fflush(stdin);
		gets(details[i].name);
	}
}
