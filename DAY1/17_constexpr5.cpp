#include <type_traits>

template<typename T>
void foo(T a)
{
	if constexpr( std::is_pointer_v<T> )
	{
		// T가 포인터 일때 최적화된 알고리즘 작성
	}
	else if constexpr ( std::is_reference_v<T> )
	{
	}
	else if constexpr ( std::is_const_v<T> )
	{
	}
}
int main()
{
}

// 현재 C++ 에서 constexpr 은 3가지 용도 입니다.
// 1. constexpr 상수(C++11) : constexpr int c = 10
// 2. constexpr 함수(C++11) : constexpr int Factorial(int n) { ... }
// 3. constexpr if  (C++17)