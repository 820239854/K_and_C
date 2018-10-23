#ifndef STR_H
#define STR_H 

#include "./sort.h"

void istrcpy(char *s, char *t){
	while(*s++ = *t++)
		;
}

int istrcmp(char *s, char *t)
{
	while(*s == *t)
	{
		if(*s == '\0')
			return 0;
		s++, t++;
	}
	return *s-*t;
}
#endif
