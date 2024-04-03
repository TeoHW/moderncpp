// 145 page
#include <iostream>
int main()
{
	// 람다표현식의 정확한 모양

	// 1. 기본적으로 리턴 타입은 컴파일러가 추론.. 
	auto f1 = [](int a, int b){ return a + b; };

	auto f2 = [](int a, int b){ if (a == 1 ) return a; return b; };

	// 2. 아래 코드는 return 문이 2개인데, 타입이 다릅니다.
	// => 이 경우는 반드시 사용자가 return 타입 지정해야 합니다
	auto f3 = [](int a, double b) -> double { if (a == 1 ) return a; return b; };

}

