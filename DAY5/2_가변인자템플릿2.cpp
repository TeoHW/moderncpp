#include <iostream>

template<typename ... Types> void foo(Types ... args)
{
	// Types : int, int, int   => template parameter pack
	// args  : 1,   2,   3     => function parameter pack

	// parameter pack 안에 몇개가 있는지 조사하는 방법
	std::cout << sizeof...(Types) << std::endl;
	std::cout << sizeof...(args)  << std::endl;
}

int main()
{
	foo(1, 2, 3);
}
