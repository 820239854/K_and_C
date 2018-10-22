#include <stdio.h>
#include "getint.h"

int cnt=0;
int arr[SIZE];

int main(int argc, char const *argv[])
{
	for(int n=0; n<SIZE && getint(&arr[n]) != EOF;n++)
	{
		cnt++;
	};	
	for(int i=0; i<cnt; ++i)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}