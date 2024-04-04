#include <stdio.h>

void foo(int a, int b)
{
	printf("foo : %d, %d\n", a, b);
}

int main()
{	
	// 함수도 메모리에 있습니다.
	// => 따라서, 주소연산자로 주소를 구할수 있습니다.
	void (*p)(int, int) = &foo;
	void (*p)(int, int) = foo; // &foo 와 같은 의미
						// "Function To pointer conversion" 문법
}