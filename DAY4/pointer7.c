#include <stdio.h>

void foo(int a, int b)
{
	printf("foo : %d, %d\n", a, b);
}

int main()
{	
//	int* p = &foo; // C 컴파일러에 따라 허용할수도 있고 경고, 에러나올수도 있다.
					// C++ 컴파일러는 에러
	int* p = (int*)&foo;				
				
	*p = 20;

	void(*p2)(int) = ( void(*p2)(int) ) &foo;
	p2(10,10);
	p2(10);
}