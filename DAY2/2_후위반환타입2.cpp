// 후위반환 - 73 page 아래 부분
#include <iostream>

// 핵심 1. decltype 이라는 키워드를 만든 이유가 아래 같은 
//		  함수 템플릿의 반환 값을 표기하기 위해 만들었습니다.

// 그런데, 아래 코드는 에러 입니다.
// 이유와 해결책은 다음소스에서.. 

template<typename T1, typename T2>
decltype(a * b) Mul(T1 a, T2 b)
{
	return a * b;
}

int main()
{
	std::cout << Mul(3, 4.1)   << std::endl;
}

