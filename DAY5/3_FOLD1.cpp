// 9_FOLD - 237 page

#include <iostream>

// Fold Expression : 가변인자 템플릿의 모든 요소에
//				     이항 연산을 수행 - C++17
//                   => 대부분의 언어에 유사한 개념이 존재 합니다.

template<typename ... Types> 
int Sum(Types ... args)
{
//	int s = (args + ...);
			// args 안의 모든 요소에 + 연산을 적용해 달라.
			// 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10
	int s = (args + ... + 0);		 // 끝에 +0 추가
			// (1 + (2 + (3 + (4 + 0)))))
	return s;
}
int main()
{
//	int n = Sum(1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
	int n = Sum();
	std::cout << n << std::endl;
}
// 1. 괄호가 필요 합니다.
// 2. 이항 연산자만 가능합니다.(거의 다 됩니다)
// 3. 4가지 표기법이 있습니다. (cppreference.com 에서 fold expression )

// ( pack op ... ) 		: unary right fold
// ==> (E1 op (E2 op (EN-1 op EN)))

// ( pack op ... op I ) : binary right fold
// ==> (E1 op (E2 op (EN-1 op Init)))

// (      ...  op pack) : unary left fold
// ==> (((E1 op E2) op ...) op EN)

// ( I op ...  op pack) : binary left
// ==> ((((I op E1) op E2) op ...) op EN)
// ==> ((((I + 2) +3) +4) 

