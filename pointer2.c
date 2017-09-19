#include<stdio.h>
void edit(int *);
main()
{
	int a;
	printf("enter a number ");
	scanf("%d",&a);
	printf("\n\nthe value before the function: %d",a);
	edit(&a);
	printf("\nit shows the handshake in the function: %d",a);
}
void edit(int *p)
{
	int n=3;
	*p=*p *n;
	printf("\nthe value after function: %d",*p);
}

