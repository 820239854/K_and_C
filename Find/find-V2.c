#include <stdio.h>
#include <string.h>
#include "./find.h"

#define MAXLINE 1000


int main(int argc, char const *argv[])
{
	char line[MAXLINE];
	int found=0;

	if(argc  != 2)
		printf("Usage: find pattern\n");
	else
		while(igetline(line, MAXLINE) > 0)
			if (strstr(line, argv[1]) != NULL)
			{
				printf("%s\n", line);
				found++;
			}
	return found;
}
