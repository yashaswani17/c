#include<stdio.h>
main()
{
	int n,m,i,j;
	printf("enter the size of the matrix\n");
	scanf("%d%d",&n,&m);
	int ar[n][m];
	printf("enter the vakues of the array");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&ar[i][j]);
		}
	}
	printf("the old array looks like this\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%4d",ar[i][j]);
		}
		printf("\n");
	}
	printf("the transpose of that look like this\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%4d",ar[j][i]);
		}
		printf("\n");
	}
}
