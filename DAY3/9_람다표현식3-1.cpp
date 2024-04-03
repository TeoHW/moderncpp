#include <iostream>


int main()
{
	// 다음중 에러는 모두 고르세요
	auto  f1 = [](int a, int b) { return a + b; };
	auto& f2 = [](int a, int b) { return a + b; };
	
	const auto& f3 = [](int a, int b) { return a + b; };
	auto&& f4 = [](int a, int b) { return a + b; };

}
