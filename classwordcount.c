#include<stdio.h>
#include<string.h>
main()
{
	char s[100],t[100];
	printf("enter a word along with a sentence\n");
	gets(s);
	gets(t);
	int l,l2,l3=0,i,ct=0;
	l=strlen(s);
	l2=strlen(t);
	char m[30];
	for(i=0;i<l2;i++)
	{
		if(t[i]!=' ')
		{
			m[l3]=t[i];
			l3++;
		}
		else
		{
			if(strcmp(s,m)==0)
			{
			ct++;
		    }
			l3=0;
		}
	}
	printf("the count is %d",ct);
}

