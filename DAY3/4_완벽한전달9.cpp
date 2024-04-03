// 7_완벽한전달1 - 113 page
#include <iostream>


int& foo(int a, double d, int& r) { r = 300; return r;}

// 1. 인자의 갯수 제한 없애기 - 가변인자 템플릿 문법(금요일수업)
// 2. 반환 값도 완벽하게 반환 하기.

template<typename F, typename ... T>
decltype(auto) chronometry( F f, T&& ... arg)
{
	return f( std::forward<T>(arg) ... );
}

int main()
{
	int n = 0;

	int& ret = chronometry(foo, 1, 3.4, n);

	std::cout << n << std::endl; // 300
	ret = 100;
	std::cout << n << std::endl; // 100
}



