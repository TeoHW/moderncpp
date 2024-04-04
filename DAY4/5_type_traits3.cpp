#include <iostream>
#include <type_traits> // C++11 이 제공하는 다양한 type traits 도구들.



template<typename T> void printv(const T& v)
{
	if constexpr ( std::is_pointer<T>::value )
		std::cout << v << " : " << *v << std::endl;
	else 
		std::cout << v << std::endl;
}





int main()
{
	int n = 10;

	printv(n); // !!
	printv(&n);
}

