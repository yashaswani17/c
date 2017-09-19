#include<stdio.h>
struct employee
{
	char name[50];
	int salary;
	char post[50];
};
main()
{
	struct employee details[5];
	int i,a=0;
	printf("enter details of 5 peoplpe\n");
	for(i=0;i<5;i++)
	{
		printf("enter the name of the employee: ");
		fflush(stdin);
		gets(details[i].name);
		printf("enter the post of the employee: ");
		gets(details[i].post);
		printf("enter the salary earned by him: ");
		scanf("%d",&details[i].salary);
		printf("\n");
	}
	for(i=0;i<5;i++)
	{	
		printf("--details of %d employee--",a++);
		printf("Employee name: ");
		puts(details[i].name);
		printf("Post: ");
		puts(details[i].post);
		printf("Salary: ");
		printf("%d",details[i].salary);
		printf("\n");
	}
	
}
