#include <stdio.h>

int foo()
{
	return 1;
}

// 	P40.c:8:11: error: initializer element is not constant
// int var = foo();

int main(int argc, char const *argv[])
{
	// here variable can be intialised with
	// no-constasudo -snt
	int var = foo();
	return 0;
}