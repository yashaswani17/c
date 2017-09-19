#include<stdio.h>
#include<limits.h>
#include<float.h>
main()
{
	int a;
	char c;
	float f;
	double d;
	printf("\nthe size of integer is %d",sizeof(int));
	printf("\nthe range is %d to %d",INT_MIN,INT_MAX);
	printf("\nthe size of character is %d",sizeof(char));
	printf("\nthe range is %ld to %ld",CHAR_MIN,CHAR_MAX);
	printf("\nthe size of float value is %d",sizeof(float));
	printf("\nthe range is %e to %e",FLT_MIN,FLT_MAX);
	printf("\nthe size of double is %d",sizeof(double));
	printf("\nthe range is %e to %e",DBL_MIN,DBL_MAX);
	
}

