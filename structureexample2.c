#include<stdio.h>
#include<string.h>
struct student
{
	char name[100];
	int roll_no,sub1,sub2;
	char grade, is[10];
};
main()
{
	int i,a=0,sum=0,n,che;
	printf("\nEnter the no of students: ");
	scanf("%d",&n);
	struct student details[n];
	int ch=1;
	while(ch>=1&&ch<=5)
	{
		printf("\nEnter 1 to create data");
		printf("\nEnter 2 to calculate the grade");
		printf("\nEnter 3 to assign the internship status");
		printf("\nEnter 4 to display the details");
		printf("\nEnter 5 to search\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				for(i=0;i<n;i++)
					{
						printf("\nEnter Details of Student %d",++a);
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
					for(i=0;i<n;i++)
						{
							sum=details[i].sub1+details[i].sub2;		
							if(sum/2==1)
							details[i].grade='D';
							else if(sum/2<=4)
							details[i].grade='C';
							else if(sum/2<=8)
							details[i].grade='B';
							else if(sum/2>8)
							{
								details[i].grade='A';
							}
							sum=0;
						}
					break;
					case 3:
						for(i=0;i<n;i++)
							{
								if(details[i].grade=='A'||details[i].grade=='B')
									strcpy(details[i].is,"Yes");
								else
									strcpy(details[i].is,"No");
							}
						break;
						case 4:
							printf("\n_____________________________________________________________________________________________________________\n\n");
							printf("\tStudent Name\t\tRoll No\t\tSubject 1\tSubject 2\tGrade\tInternship Status\n");
							printf("_____________________________________________________________________________________________________________\n");
							for(i=0;i<n;i++)
							{
								fflush(stdin);
								printf("\t");
								//puts(details[i].name);
								printf("%4s",details[i].name);
								printf("\t\t%4d",details[i].roll_no);
								printf("\t\t%4d\t\t%4d",details[i].sub1,details[i].sub2);
								printf("\t\t%4c\t\t",details[i].grade);
								puts(details[i].is);
							}
							break;
							case 5:
								printf("\nEnter 1 to search the peoplpe who would get an Internship\n");
								printf("Enter 2 to search the people who would not get an Internship\n");
								scanf("%d",&che);
								if(che==1)
								{
									printf("\nStudents who get an Internship are: \n");
									for(i=0;i<n;i++)
									{
										if(strcmp("Yes",details[i].is)==0)
										puts(details[i].name);
									}
								}
								else 
								{
									printf("\nStudents who do not get an Internship are: \n");
									for(i=0;i<n;i++)
									{
										if(strcmp("Yes",details[i].is)!=0)
										puts(details[i].name);
									}
								}
		}
	
	}
	
}
