#ifndef LINES_H
#define LINES_H 

#include <stdio.h>
#include "./sort.h"

#define MAXLEN 1000

int ireadlines(char* lineptr[], int maxlines)
{
	int len, nlines=0;
	char *p, line[MAXLEN];

	while((len=igetline(line, MAXLEN))>0)
		if(nlines >= maxlines || (p=ialloc(len))==NULL)
			return -1;
		else{
			line[len-1] = '\0';
			istrcpy(p, line);
			lineptr[nlines++] = p;
		} 
	// printf("%d\n", nlines );
	return nlines;
}

void iwritelines(char *lineptr[], int nlines)
{
	// printf("%d\n", nlines );
	for(int i=0; i<nlines; i++)
		printf("%s\n", lineptr[i]);
}

#endif
