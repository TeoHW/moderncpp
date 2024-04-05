// 7_가변인자템플릿7
#include <iostream>

void foo(int a, int b, int& c) { c = 100; }

template<typename F, typename ... T>
decltype(auto) chronometry(F f, T&& ... args)
{
//	return f( std::forward<T>(args...) );  // forward(e1, e2, e3) 인데
											// forward함수는 인자가 한개이다.

	return f( std::forward<T>(args)... );
		// f( std::forward<T>(e1), std::forward<T>(e2),std::forward<T>(e3) );)
}

int main()
{
	int n = 10;
	chronometry(foo, 1, 2, n);

	std::cout << n << std::endl;
}

