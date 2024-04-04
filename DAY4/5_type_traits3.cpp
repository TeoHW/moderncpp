#include <iostream>
#include <type_traits> // C++11 이 제공하는 다양한 type traits 도구들.

template<typename T> void printv(const T& v)
{
	if ( T 의 타입이 포인터라면 )
		std::cout << v << " : " << *v << std::endl;
	else 
		std::cout << v << std::endl;
}

int main()
{
	int n = 10;
	double d = 3.4;

	printv(n);
	printv(d);
	printv(&n);
}

