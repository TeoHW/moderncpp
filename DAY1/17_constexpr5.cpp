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