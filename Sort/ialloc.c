#ifndef ALLOC
#define ALLOC 

#define ALLOCSIZE 10000

static char allocbuf[ALLOCSIZE];
static char *allocp = allocbuf;

char* ialloc(int n)
{
	if(allocbuf+ALLOCSIZE-allocp>=n){
		allocp += n;
		return allocp - n;
	}
	else
		return 0;
}

void iafree(char *p)
{
	if(p>=allocbuf && p < allocbuf + ALLOCSIZE)
		allocp = p;
}

#endif
