#include<stdio.h>
main()
{
	int i,j,k,n,m;
	printf("enter the no\n");
	scanf("%d",&n);
	for(m=1;m<=2;m++)
	{
	for(i=1;i<=n;i++)
	{
		printf("\t\t");
		for(k=1;k<=i;k++)
		{
			printf(" ");
		}
		printf("*");
		printf("\n");
	}
	for(i=n;i>=1;i--)
	{
		printf("\t\t");
		for(k=i;k>=1;k--)
		{
			printf(" ");
		}
		printf("*");
		printf("\n");
	}
   }
}
