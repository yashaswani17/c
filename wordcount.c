#include<stdio.h>
#include<string.h>
main()
{
	char s[100],t[100];
	printf("enter a word along with a sentence\n");
	gets(s);
	gets(t);
	int l,l2,l3=0,i,c=0,ct=0,j;
	l=strlen(s);
	l2=strlen(t);
	t[l2]=' ';
	char m[100];
	
	for(i=0;i<=l2;i++)
	{
		if(t[i]!=' ')
		{
			m[l3]=t[i];
			l3++;
		}
		else
		{
			strlwr(s);
			strlwr(m);
			if(strcmp(s,m)==0)
			ct++;
			/*
			for(j=0;j<l;j++)
			{
				if(s[j]==m[j])
				c++;	
			}
			if(c==l)
			ct++;*/
			
			l3=0;
			c=0;
			
		}
	}
	printf("the count of the word is %d",ct);
}

