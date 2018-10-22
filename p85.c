#include <stdio.h>

int foo()
{
	return 1;
}

// int x = foo();  initializer element is not constant

int x;

// int y=x; initializer element is not constant

int main(int argc, char const *argv[])
{
	int y=x;
	printf("%d\n", x);	
	return 0;
}