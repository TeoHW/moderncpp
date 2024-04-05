#include <iostream>

// 규칙  1. 인자가 값 타입일 때 (T a)
// => 함수 인자가 가진 "const, volatile, refrence" 를 제거하고 결정


template<typename T> void foo(T a)
{
	// a = 100;

	// __func__ : C++표준 매크로 - 함수 이름만 담고 있다. 
	// __PRETTY_FUNCTION__ : 함수이름 + 인자모양, 단, C++ 표준 아님, g++, clang에서 사용
	// __FUNCSIG__ : visual studio  컴파일러에서 사용

	// std::cout << __func__ << std::endl;
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}
int main()
{
	// 타입을 전달하는 경우
	// 사용자가 전달한 타입을 사용.
	foo<int>(3.4); // int 3

	// 타입인자를 생략하면 함수 인자를 보고 타입을 추론
	// T의 타입을 예측해 보세요
	foo(10); // T : int
	foo(3.4);// T : double

	int n = 10;
	int& r = n;
	const int c = 10;
	const int& cr = c;
	
	foo(n); // int
	foo(c); // int
	foo(r); // int
	foo(cr);

	// 주의 : 인자가 가진 const 속성만 제거됩니다. 
	// 인자가 가진 것을 따라간 곳의 속성은 유지
	const char* s = "hello";
	const int s2[] = {1,2,3};
	foo(s); // const char*
	foo(s2);
}
