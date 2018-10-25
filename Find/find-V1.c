#include <stdio.h>
#include "./find.h"

#define MAXLINE 1000

char pattern[] = "ould";

int main(int argc, char const *argv[])
{
	char line[MAXLINE];
	int found=0;

	while(igetline(line, MAXLINE) > 0)
		if (istrindex(line, pattern) >= 0)
		{
			printf("%s\n", line);
			found++;
		}
	return found;
}
