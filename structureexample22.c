#include<stdio.h>
#include<string.h>
struct employee
{
	char name[50];
	int salary;
	char post[50];
};
void sort(struct employee *swap,int);
main()
{
	
	
	int i,n,a=0,ch=1,ch1;
	printf("Enter the no of employees: ");
	scanf("%d",&n);
	struct employee details[n];
	int j,s;
	char na[50],p[50];
	while(ch==1)
	{
		printf("1. To create data.\n");
		printf("2. Sort the data.\n");
		printf("3. To Display the data\n");
		printf("4. To stop\n");
		printf("Enter your choice: ");
		scanf("%d",&ch1);
		switch(ch1)
		{
			case 1:
				
				
				printf("enter details of %d peoplpe\n",n);
				for(i=0;i<n;i++)
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
				break;
				case 2:
					sort(&details,n);
					break;
					case 3:
						for(i=0;i<n;i++)
						{	
							printf("--details of %d employee--\n\n",a++);
							printf("Employee name: ");
							puts(details[i].name);
							printf("Post: ");
							puts(details[i].post);
							printf("Salary: ");
							printf("%d",details[i].salary);
							printf("\n\n");
						}
						break;
						case 4:
							ch=2;
							break;
		}
	}	
}
void sort(struct employee *swap,int n)
{
	int i,j,s;
	char na[50],p[50];
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if (swap[i].salary < swap[j].salary)
			{
				s=swap[i].salary;
				swap[i].salary=swap[j].salary;
				swap[j].salary=s;
				strcpy(na,swap[i].name);
				strcpy(swap[i].name,swap[j].name);
				strcpy(swap[j].name,na);
				strcpy(p,swap[i].post);
				strcpy(swap[i].post,swap[j].post);
				strcpy(swap[j].post,p);
			}
		}
	}
}
