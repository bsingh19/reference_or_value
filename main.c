#include <stdio.h>
#include <stdlib.h>

void updateNewAddr(int* a, int *b)
{
	a = b;
}

void func(int* a) 
{
	*a = 5;
}

int main()
{
	int x = 3;
	int* xptr = &x;
	printf("Value of x before call: %d\n", x);

	func(xptr);
	printf("Value of x after call: %d\n", x);
	
	int b = 66;
	updateNewAddr(xptr, &b);
	printf("Value of x after update: %d\n", x);

	return 0;
}
