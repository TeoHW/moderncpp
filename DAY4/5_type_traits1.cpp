// 4_type_traits - 184page

#include <iostream>

template<typename T> void printv(const T& v)
{
	if(T의 타입이 포인터라면){
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

