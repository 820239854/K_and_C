#include <stdio.h>

int main(int argc, char const *argv[])
{
	int c;

	while( (c=getchar()) != EOF)
	{
		putchar(c);
		putchar('\n');
	}
	return 0;
}