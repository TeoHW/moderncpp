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

	int *p = (void*)&foo;  // c 컴파일러에 따라 허용할수도 있음 (or 경고, or 에러)
					// c++ 컴파일러는 에러

}