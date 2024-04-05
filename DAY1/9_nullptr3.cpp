#include <iostream>

// nullptr 원리(구현)

void foo(int* p)    { std::cout << "int*\n";}
void goo(double* p) { std::cout << "double*\n";}
// 최초의 nullptr 은 boost 라이브러리에서 아래 처럼 구현해서 사용했습니다.
// C++11 에서는 아래 처럼 구현된것은 아니고 동일하게 동작하는 "키워드로제공"
struct mynullptr_t
{
	template<typename T>
	operator T*() { return 0;}
};
mynullptr_t mynullptr;

int main()
{
	foo(mynullptr);	// mynullptr_t => int* 로 암시적 형변환 될수 있어야 합니다.
					// mynullptr.operator int*() 라는 멤버 함수가 있으면 ok
	goo(mynullptr);
}