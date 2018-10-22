#ifndef GET_CH
#define GET_CH 

#include <stdio.h>
#include "getint.h"
char buf[BUFFSIZE];
int bufp=0;

int getch(void)
{
	return (bufp>0) ? buf[--bufp]:getchar(); 
}

void ungetch(int c)
{
	if(bufp>=BUFFSIZE)
		printf("Can't ungetch: too many\n");
	else
		buf[bufp++] = c;
} 
#endif