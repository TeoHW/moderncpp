#include <iostream>

int main()
{
	// 다음중 에러는 모두 고르세요
	auto  f1 = [](int a, int b) { return a + b; };

	auto& f2 = [](int a, int b) { return a + b; }; // error

	const auto& f3 = [](int a, int b) { return a + b; }; // ok

	auto&& f4 = [](int a, int b) { return a + b; };
	// T&& f4 = 함수인자

	// 참고 auto&& 는 "T&&" 와 동일
	int n = 3;
	auto&& a1 = n; // ok  auto = int&   auto&&=int& &&  int& a1 = n
	auto&& a2 = 3; // ok  auto = int    auto&&=int&&    int&& a2 = 3
}
