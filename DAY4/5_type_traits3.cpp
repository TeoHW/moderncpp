// 4_type_traits - 184page

#include <iostream>
#include <type_traits>

template<typename T> void printv(const T& v)
{
	if constexpr (std::is_pointer<T>::value){
		std::cout << v << " : " << *v << std::endl;
	}
	else{
		std::cout << v << std::endl;
	}
}
int main()
{
	int n = 10;
	double d = 3.4;

	printv(n);
	printv(d);
	printv(&n);
}

