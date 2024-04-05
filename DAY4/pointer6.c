#include <stdio.h>

void foo(int a, int b)
{
	printf("foo : %d, %d\n", a, b);
}

typedef void (*FT)(int, int);

int main()
{
	void (*f)(int, int) = &foo;
	FT f2 = foo;

}