#include <stdio.h>

int main(int argc, char const *argv[])
{
	int c;
	char* name = "./input";

	FILE *fp = fopen(name, "r");
	while((c=getc(fp)) != EOF) 
	{
		putchar(c);
	}
	return 0;
}