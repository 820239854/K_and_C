#ifndef GET_INT
#define GET_INT 

#include <stdio.h>
#include <ctype.h>
#include "getint.h"

int getint(int *pn)
{
	int c;
	while(isspace(c = getch()))
		;
	if(!isdigit(c) && c!=EOF && c!='+' && c!='-'){
		ungetch(c);
		return 0;
	}
	int sign = (c=='-') ? -1:1;
	if(c=='-' || c=='+')
		c = getch();
	for(*pn=0; isdigit(c); c=getch())
		*pn = (*pn)*10 + (c-'0');
	*pn *= sign;
	if(c != EOF)
		ungetch(c);
	return c;
}

#endif