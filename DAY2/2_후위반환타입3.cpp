// 후위반환 - 73 page 아래 부분
#include <iostream>
// 핵심 : 후위 반환 타입 문법을 만든 이유는 아래 같은 코드를 작성하기 위해서입니다.
template<typename T1, typename T2>
//decltype(a * b) Mul(T1 a, T2 b)       // error. a, b 를 선언전에 사용
auto Mul(T1 a, T2 b) -> decltype(a * b) // ok.    a, b 를 선언후에 사용
{
	return a * b;
}

int main()
{
	std::cout << Mul(3, 4.1)   << std::endl;

	a = 10; // error. 변수를 선언전에 사용
	int a = 0;
	a = 10; // ok. 변수를 선언후에 사용
}

// 파이썬도 타입표기할때는 아래 처럼
/*
def add(x:int, y:int) -> int
	return x + y
*/