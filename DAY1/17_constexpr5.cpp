// 17_static_if - 51 page

#include <type_traits>
#include <iostream>

template<typename T>
int foo(T a){
	int t;
	if constexpr(std::is_pointer_v<T>){
		// T가 포인터일 때 최적화된 알고리즘 제공
		*a = 10;
		t = *a;
	}
	else if constexpr (std::is_reference_v<T>){
		a = 10;
		t = a;
	}
	else if constexpr (std::is_const_v<T>){
		a = 10;
		t = a;
	}
	return t;
}

int main()
{
	int a = 10;
	int *b = nullptr;
	int c = 50;
	b = &c;
	
	std::cout << foo(0) << std::endl;
	std::cout << foo(b) << std::endl;
	std::cout << c << std::endl; 

}

