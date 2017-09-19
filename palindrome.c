#include<stdio.h>
#include<string.h>
main()
{
	int i,l=0,c=0;
	char s[20];
	printf("enter a word\n");
	gets(s);
	while(s[l]!='\0')
	l++;
	for(i=0;i<=l/2;i++)
	{
		if(s[i]!=s[l-i-1])
			c=1;
			break;
	}
	if(c==0)
		printf("it is a palindrome");
		else
		printf("not a palindrome");
}

