#include <iostream>
#include <type_traits>
#include <concepts>

// 값 버전과 조건자 버전의 find 를 같은 이름을 사용할수 없습니다.
// 아래 코드를 생각해보면 모양이 완전히 동일해 집니다.
/*
template<typename IT, typename T>
void find(IT first, IT last, T value)
{
}
template<typename IT, typename T>
void find(IT first, IT last, T pred )
{
}
*/
// C++20 부터 조건을 만족할때만 사용하는 기술이 나오게 됩니다.
template<typename IT, typename T> requires (!std::predicate<T, IT>)
void find(IT first, IT last, T value)
{
}
template<typename IT, typename T> requires std::predicate<T, IT>
void find(IT first, IT last, T pred )
{
}


int main()
{	
	int x[3] = {1,2,3};
	
	find(x, x+3, 2);

	find(x, x+3, [](int n){ return n %2 == 0;});
}