#include <iostream>
/*
template<typename T>
void foo(T arr)
{
	auto sz = std::size(arr); // error. arr는 현재 배열 아닙니다. 포인터!
	std::cout << sz << std::endl;
}
*/
template<typename T>
void foo(T& arr)
{
	auto sz = std::size(arr); 
	std::cout << sz << std::endl;
}

int main()
{
	int x[3] = {1,2,3};

	// C++ 에서는 배열의 크기를 구하는 함수가 있습니다.
	auto sz = std::size(x); // 3

	foo(x);
}