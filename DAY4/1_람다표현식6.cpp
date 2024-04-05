// 145 page
#include <iostream>
int main()
{
	// 람다표현식의 정확한 모양
	// 1. 기본적으로 return타입은 컴파일러가 추론
	auto f1 = [](int a, int b){ return a + b; };

	auto f2 = [](int a, int b){ if (a == 1 ) return a; return b; };

	// 서로 다른 타입에 대해 리턴이 존재하면 컴파일러가 추론할 수 없음
	// 이런 경우 사용자가 직접 리턴 타입을 적어야 함
	// 후위 반환타입을 적어주면 간단히 해결
	auto f3 = [](int a, double b){ if (a == 1 ) return a; return b; };
	auto f3 = [](int a, double b) -> double { if (a == 1 ) return a; return b; };
}

