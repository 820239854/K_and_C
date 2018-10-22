#include <ctype.h>
#include "./Calculator/getch.c"

#define SIZE 100

int getch(void);
void ungetch(int);
int n, arr[SIZE], getint(int *);
int cnt;
int main(int argc, char const *argv[])
{
	for(n=0; n<SIZE && getint(&arr[n]) != EOF;n++)
	{
		cnt++;
	};	
	for(int i=0; i<cnt; ++i)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}

int getint(int *pn)
{
	int c;
	while(isspace(c = getch()))
		;
	if(!isdigit(c) && c != EOF && c != '+'
	      && c != '-')
	{
		ungetch(c);
		return 0;
	}
	int sign = (c == '-') ? -1:1;
	if(c == '+' || c == '-')
		c = getch();
	for(*pn=0; isdigit(c); c=getch())
		*pn = 10*(*pn)+(c-'0');
	*pn *= sign;
	if(c != EOF)
		ungetch(c);
	return c;
}