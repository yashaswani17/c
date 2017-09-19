#include<stdio.h>
main()
{
	int i,c,k,j,n;
	printf("enter a no\n");
	scanf("%d",&n);
	c=n-1;
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=c;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		c--;
		printf("\n");
	}
	c=1;
	for(i=n-1;i>=1;i--)
	{
		for(k=1;k<=c;k++)
		{
			printf(" ");
		}
		for(j=i;j>=1;j--)
		{
			printf("*");
		}
		c++;
		printf("\n");
	}
}
