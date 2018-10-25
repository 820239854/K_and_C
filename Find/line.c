#ifndef LINE_H
#define LINE_H 

#include <stdio.h>
#include "./find.h"

int igetline(char s[], int lim)
{
	int i=0;
	int c;
	while(--lim>0 && (c=getchar())!=EOF && c!='\n')
	{
		s[i++] = c;
	}
	if(c=='\n')
		s[i++] = c;
	s[i] = '\0';
	return i;
}

int istrindex(char s[], char t[])
{
	int i, j, k;
	for(i=0; s[i]!='\0'; i++)
	{
		for(j=i, k=0; t[k]!='\0' && s[j]==t[k]; j++,k++)
			;
		if(k>0 && t[k]=='\0')
			return i;
	}
	return -1;
}

#endif