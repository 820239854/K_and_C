#ifndef GET_LINE
#define GET_LINE 

#include <stdio.h>
#include "./sort.h"

int igetline(char s[], int lim)
{
	int i;
	char c;
	for(i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
		s[i] = c;
	if(c == '\n'){
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

#endif
