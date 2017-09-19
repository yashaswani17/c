#include<stdio.h>
main()
{
	int i,n,no,ct=0;
	printf("enter the size of array\n");
	scanf("%d",&n);
	int a[n];
	printf("enter %d numbers\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the number you want to find\n");
	scanf("%d",&no);
	for(i=0;i<n;i++)
	{
		if(a[i]==no)
		ct++;
	}
	if(ct>0)
	printf("the count of the no %d is %d",no,ct);
	else
	printf("the number is not present in the array");
}

