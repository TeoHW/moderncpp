#include <iostream>

// recursive - 233 page 

// 1. 1번째 인자는 독립된 이름의 변수 사용
// 2. recursive 의 종료를 위해
// => C++17 이전에는 인자없는 foo() 만들어야 합니다.
// => C++17 부터는 아래 코드 처럼 if constexpr 로 해결가능

//void foo() {}

// 주의!!! : recursive 로 함수 호출을 하는 것이 아니라
//          recursive 로 함수를 생성한것!!
//  		foo(int, double, char) => foo(double, char) => foo(char)

template<typename T, typename ... Types>
void foo(T value, Types ... args)
{
	static int n = 0;
	++n;
	std::cout << n << " : " << value << std::endl;

//	foo( args... ); // foo(3.4, 'A')
					// foo('A')
					// foo() 

	if constexpr ( sizeof...(args) > 0 )
		foo(args...);
}

int main()
{
	foo(1, 3.4, 'A');  // value : 1, args : 3.4, 'A'
}





