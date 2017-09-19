#include<stdio.h>
#include <math.h>
float disc(int,int,int);
main()
{
	int a,b,c;
	int flag;
	float x1,x2;
	printf("\nEnter the value of a\na=: ");
	scanf("%d",&a);
	printf("Enter the value of b\nb=: ");
	scanf("%d",&b);
	printf("Enter the value of c\nc=: ");
	scanf("%d",&c);
	float x;
	if(a==0)
	{
		x=-(c/b);
		printf("\n x=%f ",x);
		
	}
	else
	{
		x =disc(a,b,c);
		int flag=0;
		if(x<0)
		{
			x=-x;
			flag=1;
		}
	 x1=(-b+sqrt(x))/(2*a);
		 x2=(-b-sqrt(x))/(2*a);
	}
	if(flag==1)
	{
		printf("\n The values of x are x1= %f i, x2= %f i",x1,x2);
	}
	else
	{
			printf("\n The values of x are x1= %f i, x2= %f i",x1,x2);
	}
}

float disc(int a,int b, int c)
{
	return (b*b)- (4*a*c);
}
