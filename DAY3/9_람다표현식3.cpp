#include <iostream>

auto add = [](int a, int b) {return a + b;};

// auto 와 람다 표현식
int main()
{
	// 람다표현식을 auto 변수에 담아서 사용할수 있습니다.
	// 아래 코드는 "Point p = Point{}" 와 같은 의미의 코드입니다.
	// => 컴파일러가 최적화의 의해 "Point p"  와 같아 집니다.
	// => "Plus p" 로 생각하세요
	auto f = [](int a, int b) { return a + b; };
			// class XXX{ operator()(int, int){} }; XXX{};

	// 이제 f 는 이항 함수 입니다.(인라인 함수)
	// => 함수 처럼 사용하세요
	int n1 = f(1, 2);
	std::cout << n1 << std::endl; // 3
}
// 위코드의 의미 : 함수안에서만 사용할 함수를 만든것
//					inner function, nested function 등의 개념
//					C++ : 함수안에서 함수를 만들수 없지만
//						  람다표현식으로 가능
//					또한, main 함수 지역변수 캡쳐도 가능.

