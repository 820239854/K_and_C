#ifndef Q_SORT
#define Q_SORT 

#include "./sort.h"

void iqsort(char *v[], int left, int right)
{
	if(left>=right)
		return;
	iswap(v, left, (left+right)/2);
	int last = left;
	for(int i=left+1; i<=right; ++i)
		if(istrcmp(v[i], v[left]) < 0)
			iswap(v, ++last, i);
	iswap(v, left, last);
	iqsort(v, left, last-1);
	iqsort(v, last+1, right);
}

void iswap(char *v[], int i, int j)
{
	char *temp;
	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}

#endif
