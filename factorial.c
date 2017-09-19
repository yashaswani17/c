#include<stdio.h>
int fact(int x)
{
  if(x!=1)
   return x*fact(x-1);
  else
  return 1;
}
main()
{
  int g;
 printf("\nEnter the number whose factorial you want-");
 scanf("%d",&g);
  printf("\nfactorial=%d",fact(g));
}
