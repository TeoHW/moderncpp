#include <iostream>

int factorial(int n) {	return n == 1 ? 1 : n* factorial(n-1); }

int main()
{
	std::cout << factorial(5) << std::endl; // 5! => 120

	// 위 함수와 동일한 내용의 람다표현식 만들기

	// #1. 람다표현식의 함수 이름은 "operator()" 이므로 아래 처럼
	// => MS 컴파일러는 가능..표준이 아님.
	// => G++ 안됨
//	auto fact = [](int n) {	return n == 1 ? 1 : n* operator()(n-1); };

	// #2. C++23 부터는 explicit object parameter 를 사용하면
	//    "recursive lambda" 가능.
	auto fact = [](this auto& self, int n) { return n == 1 ? 1 : n* self(n-1); };

}