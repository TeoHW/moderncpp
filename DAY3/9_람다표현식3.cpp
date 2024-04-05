#include <iostream>
#include <algorithm>
#include <functional>

// auto 와 람다 표현식
int main()
{
	// 람다표현식을 auto 변수에 담아서 사용할 수 있습니다.
	// 아래코드는 "Point p = Point{}"와 같은 의미의 코드입니다. 
	auto f = [](int a, int b) { return a + b; };
	// f는 인라인 함수
	int n1 = f(1,2);

}
// 위코드의 의미 : 함수안에서만 사용할 함수를 만든 것
//					inner function, nested function등의 개념
//					람다표현식으로 가능 (함수를 변수처럼, inline으로 빠르게)!!
