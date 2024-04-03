// 5_람다표현식5
#include <iostream>
#include <vector>
#include <algorithm>

// 람다표현식과 타입

int main()
{
	auto f1 = [](int a, int b) { return a + b; };
				// class AAA{}; AAA();

	auto f2 = [](int a, int b) { return a + b; };
				// class BBB{}; BBB();

	// 핵심 : 모든 람다표현식은 다른 타입입니다.
	std::cout << typeid(f1).name() << std::endl;
	std::cout << typeid(f2).name() << std::endl;

	f1 = [](int a, int b) { return a - b; }; // error.
										// 모든 람다 표현식은 다른 타입이므로

	// 람다 표현식으로 초기화된 auto 변수는 다른 람다 표현식을 담을수 없습니다.
}





