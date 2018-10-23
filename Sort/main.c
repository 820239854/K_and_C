#include <stdio.h>
#include "./sort.h"

#define MAXLINES 5000

char* lineptr[MAXLINES];

int main(int argc, char const *argv[])
{
	int nlines;
	if((nlines = ireadlines(lineptr,MAXLINES))>=0){
		iqsort(lineptr, 0, nlines-1);
		// printf("%d\n", nlines );
		// for(int i=0; i<4; i++)
		// 	printf("%s\n", lineptr[i]);
		iwritelines(lineptr, nlines);
		return 0;
	}

	else{
		printf("error: input too many\n");
		return 1;
	}
	return 2;
}