#include<stdio.h>
#include<string.h>
#include<process.h>
struct student
{
	char name[30];
	int roll_no,sub1,sub2;
};
main()
{
	struct student details[30];
	int i,ch,n,rn;
	char nullstr[20] = {"\0"};
	printf("\nEnter the no of students:");
	scanf("%d",&n);
	ch=1;
	do
	{
		printf("\nEnter 1 to create data");
		printf("\nEnter 2 to display the details");
		printf("\nEnter 3 to search");
		printf("\nEnter 4 to modify/delete a detail");
		printf("\nEnter 5 to exit");
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
					case 1:
					 for(i=0;i<n;i++)
					{
						printf("\nEnter Details of Student %d",i+1);
		        		printf("\nEnter name: ");
						fflush(stdin);
						gets(details[i].name);
						printf("enter the roll number: ");
						scanf("%d",&details[i].roll_no);
						printf("Enter the marks of Subject 1: ");
						scanf("%d",&details[i].sub1);
						printf("Enter the marks of Subject 2: ");
						scanf("%d",&details[i].sub2);
					}
					break;				
					case 2:
						printf("\n______________________________________________________________________________________________\n\n");
						printf("\tStudent Name\t\tRoll No\t\tSubject 1\tSubject 2\t");
						printf("\n______________________________________________________________________________________________\n");
						for(i=0;i<n;i++)
						{
							fflush(stdin);
							printf("\n");
							printf("\t%4s",details[i].name);
							printf("\t\t\t%4d",details[i].roll_no);
							printf("\t\t%4d\t\t%4d",details[i].sub1,details[i].sub2);
							printf("\n______________________________________________________________________________________________\n");
						}
						break;
				    	case 3:
							printf("\nEnter the roll no. to search the people\n");
							scanf("%d",&rn);
							for(i=0;i<n;i++)
							{
								if(rn==details[i].roll_no)
								{
									printf("Name : ");
									puts(details[i].name);
									printf("Subject 1 marks: %d\n",details[i].sub1);
									printf("Subject 2 marks: %d\n\n",details[i].sub2);
								}
							}
							break;
							case 4:
								printf("Enter the roll no. whose detail you want to delete: ");
								scanf("%d",&rn);
								for(i=0;i<n;i++)
								{
									if(rn==details[i].roll_no)
									{
										strcpy(details[i].name,nullstr);
										details[i].roll_no=0;
										details[i].sub1=0;
										details[i].sub2=0;
										n--;
									}
								}
							break;
							case 5:
								printf("\nExiting..................");
								exit(0);
		}
	
	}while(ch>=1&&ch<=5);
}
