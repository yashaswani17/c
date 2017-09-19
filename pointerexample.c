#include<stdio.h>
main()
{
	int a=5;
	int *p;
	p=&a;
	printf("%d, %u\n",a,&a);
	printf("%d, %u, %d\n\n",*p,p,&p);
	
	scanf("\n%d",&a);
	printf("%d, %u",a,&a);
	printf("\n%d, %u, %d\n\n",*p,p,&p);
	
	scanf("%d",p);
	printf("%d, %u",a,&a);
	printf("\n%d, %u, %d",*p,p,&p);
	
	*p=10;
	printf("\n%d, %u\n",a,&a);
	printf("%d, %u, %d\n",*p,p,&p);
}
