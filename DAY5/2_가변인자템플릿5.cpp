#include <iostream>
#include <tuple>

template<typename ... Types> void foo(Types ... args)
{
	// args 에 있는 모든 요소를 꺼내고 싶다면
	// 1. args 에서 2번째 값을 꺼내고 싶다 ? 
	// => 바로 꺼낼수 있는 방법은 C++26 부터 제공됩니다.

	// 2. 지금은 아래 3가지 기술밖에 없습니다.

	// (1) pack expansion - C++11
	int x[] = {args...}; // 모든 요소가 같은 타입인 경우
	std::tuple<Types...> tp(args...); // 다른 타입이 있는 경우

	// (2) recursive 유사 기술 - C++11

	// (3) fold expression - C++17


}


int main()
{
	foo(1, 2, 3);
}

