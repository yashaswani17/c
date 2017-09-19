#include<stdio.h>
#include<math.h>
main()
{

	int a,b,c,d,e,f;
	float a1,b1,c1,d1,e1,f1;
	a=sizeof(int);
	b=sizeof(short int);
	c=sizeof(long int);
	d=sizeof(float);
	e=sizeof(double);
	f=sizeof(char);
	a1=pow(2,a*8);
    b1=pow(2,b*8);
    c1=pow(2,c*8);
    d1=pow(2,d*8);
    e1=pow(2,e*8);
    printf("INT\n size=%d Range=0 to %f\n",a,a1-1);
    printf("SIGNED INT\n size=%d Range=%f to %f\n",a,(-a1/2),(a1/2-1));
    printf("SHORT INT\n size=%d Range=%d to %f\n",b,(b1-1));
    printf("SIGNED SHORT INT\n size=%d Range=%f to %f\n",b,(-b1/2),(b1/2-1));
    printf("LONG INT\n size=%d Range=0 to %f\n",c,(c-1));
    printf("SIGNED LONG INT\nsize=%d Range=%f to %d\n",c,(-c/2),(c/2-1));
    printf("FLOAT\nsize=%d Range=0 to %f\n",d,(d1-1));
    printf("SIGNED FLOAT\nsize=%d Range=0 to %f\n",d,(-d1/2),(d1/2-1));
    printf("DOUBLE\n size=%d Range=%f to %f\n",e,(-e1/2),(e1/2-1));
    printf("DOUBLE\nsize=%d Range=0 to %f\n",e,(e1-1));
    printf("CHAR\nsize=%d Range=0 to %f\n",f,(f1-1));
    printf("SIGNED CHAR\nsize=%d Range=%f to %f\n",f,(-f1/2),(f1/2-1));
}

    
