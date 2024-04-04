#include <iostream>
#include <type_traits>

// 만드는 법
// 1. primary template 을 만들고 false 리턴( value = false 의미)
// 2. 조건을 만족하는 부분 특수화를 만들고 true 리턴(value = true)

template<typename T> struct is_pointer
{
	enum { value = false };
};

template<typename T> struct is_pointer<T*>
{
	enum { value = true };
};

template<typename T> void foo(const T& a)
{
	// T : int, int*
	if ( is_pointer<T>::value )
		std::cout << "포인터" << std::endl;
	else
		std::cout << "포인터 아님" << std::endl;
}

int main()
{
	int n = 0;
	foo(n);
	foo(&n);
}
