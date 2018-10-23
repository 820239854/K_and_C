#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a[10]={0};
	// for (int i = 0; i < 10; ++i)
	// {
	// 	printf("%d\n", a[i]);
	// }

	// int *p = &a[0];
	int *p = a;
	printf("%d\n", *p);
	return 0;
}