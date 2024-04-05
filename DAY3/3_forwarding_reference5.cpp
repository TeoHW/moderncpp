#include <iostream>

template<typename T> void foo(T&& arg)
{
	// 확인하는법
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}
int main()
{
	int n = 10;

	foo(n);  //
	foo(10); //
}




