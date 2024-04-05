#include <iostream>

// 규칙 2. 인자가 T& 일때 (참조)
// 함수 인자가 가진 reference 속성은 제거하고 타입 결정
// 함수 인자의 const, volatile 속성은 유지

template<typename T> void foo2(T a)
{
	// a = 100;
	std::cout << "foo2" << __PRETTY_FUNCTION__ << std::endl;
}

template<typename T> void foo(T& a)
{
	// a = 100;
	std::cout << "foo" << __PRETTY_FUNCTION__ << std::endl;
	foo2(a);
}

int main()
{
	int n = 10;
	int& r = n;
	const int c = 10;
	const int& cr = c;

	foo(n);  // T => int, a => int&
	foo(c);  // T => const int, a => const int&
	foo(r);  // T => int, a => int&
	foo(cr); // T => const int, a => const int&
}
