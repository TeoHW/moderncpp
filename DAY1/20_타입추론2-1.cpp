#include <iostream>
// 규칙 1. 인자가 값 타입 일때 (T a)
// => 함수 인자가 가진 "const, volatile, reference"를 제거하고 타입을 결정

template<typename T> void foo(T a)
{
//	a = 100;
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}
int main()
{
	int n = 10;
	int& r = n;
	const int c = 10;
	const int& cr = c;
	
	foo(n); // T = int
	foo(c); // T = int
	foo(r); // T = int
	foo(cr);// T = int

	// 주의 : 인자가 가진 const 속성만 제거 됩니다.
	//        인자가 가진 것을 따라간 곳의 속성은 유지
	const char* s = "hello";
	foo(s); // T = const char*

	const char* const s1 = "hello";
	foo(s1);// T = const char*

}
