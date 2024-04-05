// 9_FOLD - 237 page

#include <iostream>

// Fold Expression : 가변인자 템플릿의 모든 요소에
//				     이항 연산을 수행 - C++17
//                   => 대부분의 언어에 유사한 개념이 존재 합니다.

template<typename ... Types> 
int Sum(Types ... args)
{
	int s = (args + ...);
			// args 안의 모든 요소에 + 연산을 적용해 달라.
			// 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10
	return s;
}
int main()
{
	int n = Sum(1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
	std::cout << n << std::endl;
}



