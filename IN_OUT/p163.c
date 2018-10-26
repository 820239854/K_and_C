#include <stdio.h>
#include <stdlib.h>


void filecopy(FILE *ifp, FILE *ofp){
	int c;
	while((c=getc(ifp)) != EOF){
		putc(c, ofp);
	}
}
int main(int argc, char const *argv[])
{
	FILE *fp;
	const char *prog_name = argv[0];
	if(argc==1)
		filecopy(stdin, stdout);
	else 
		while(--argc>0){
			if((fp=fopen(*++argv, "r")) == NULL){
				fprintf(stderr, "%s:can't  open %s\n", prog_name, *argv);
				exit(1);
			}
			else{
				filecopy(fp, stdout);
				fclose(fp);
			}
		}
	if(ferror(stdout)){
		fprintf(stderr, "%s: error writing stdout\n", prog_name);
		exit(2);
	}
	return 0;
}