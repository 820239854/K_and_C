#include <stdio.h>
#include <assert.h>

int main(int argc, char const *argv[])
{
	int c;
	char *In_name = "./input";
	char *Out_name= "./output";

	FILE *fp = fopen(In_name, "r");
	FILE *fp_out = fopen(Out_name,"w");
	// assert(fp_out != NULL);
	while((c=getc(fp)) != EOF) 
	{
		putc(c, fp_out);
	}
	return 0;
}