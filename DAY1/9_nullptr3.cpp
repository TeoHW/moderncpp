#include <iostream>

// nullptr 원리(구현)

void foo(int* p)    { std::cout << "int*\n";}
void goo(double* p) { std::cout << "double*\n";}

struct mynullptr_t
{
	template<typename T>
	operator T*() { return 0; }
};

mynullptr_t mynullptr;

int main()
{
	
	foo(mynullptr); // mynullptr_t => int*로 암시적 형변환 될 수 있어야 합니다.
					// mynullptr.operator int*()라는 멤버 함수가 있으면 ok
	goo(mynullptr);
}