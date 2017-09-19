#include<stdio.h>
void create(int [],int);
void search(int [],int,int);
void append(int [],int,int);
void display(int [],int);
main()
{
	int i,n,ch,inc,e;
	
	int a[n];
	while(ch==1||ch==2||ch==3)
	{
	printf("\nChoose an option\n1. Create an array\n2. search an element\n3.append the array\n4. To display\n5. to exit\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("\nenter the size of an array: ");
	 		scanf("%d",&n);
			create(a,n);
			break;
			case 2:
				printf("\nenter the element you want to search: ");
				scanf("%d",&e);
				search(a,e,n);
				break;
				case 3:
					printf("\nenter the number by which you want to increase the size: ");
					scanf("%d",&inc);
					append(a,n,inc);
					case 4:
					display(a,n);
					break;					
	}
 }
}
void create(int a[],int n)
{
	int i;
	printf("\nenter %d numbers\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void search(int a[],int e,int n)
{
	int i,c=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==e)
		c=1;
	}
	if(c==1)
	printf("the number is present");
	else
	printf("the number is not present");
}
void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
}
void append(int a[],int n,int inc)
{
	int i;
	a[n+inc];
	printf("enter %d numbers",inc);
	for(i=n;i<inc;i++)
	{
		scanf("%d",&a[i]);
	}	
}
