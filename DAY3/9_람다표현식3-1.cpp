#include <iostream>


int main()
{
	// 다음중 에러는 모두 고르세요
	auto  f1 = [](int a, int b) { return a + b; };
	// auto& f2 = [](int a, int b) { return a + b; }; // 임시객체이기 때문에 rvalue이다, rvalue는 lvaue ref로 가리킬 수 없다
	
	const auto& f3 = [](int a, int b) { return a + b; };
	auto&& f4 = [](int a, int b) { return a + b; };	// auto는 템플릿하고 동일하다.. 따라서 T&&는 lvalue rvalue 모두 받을 수 있다. 

}