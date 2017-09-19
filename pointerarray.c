#include<stdio.h>
void create(int *,int);
void search(int *,int,int);
void display(int *,int);
main()
{
	int i,n,ch,e;
	int a[n];
	while(ch==1||ch==2||ch==3)
	{
	printf("\nChoose an option\n1. Create an array\n2. search an element\n3.display the array\n4. To Exit\n");
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
					display(a,n);
					break;
					
	}
 }
}
void create(int *p,int n)
{
	int i;
	printf("\nenter %d numbers\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",(p+i));
	}
}
void search(int *p,int e,int n)
{
	int i,c=0;
	for(i=0;i<n;i++)
	{
		if(*(p+i)==e)
		c=1;
	}
	if(c==1)
	printf("the number is present");
	else
	printf("the number is not present");
}
void display(int *p,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\n%d",*(p+i));
	}
}
