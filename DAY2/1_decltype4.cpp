#include <iostream>

int x = 0;

int& foo(int n, double d) { return x; }

int main()
{
	auto ret = foo(1, 3.4); // int ret = x;

	// 함수 반환 타입을 정확히 추론해서 받으려면
	decltype(foo(1, 3.4)) ret2 = foo(1, 3.4); // int& ret2 = x;
	// decltype(함수호출식) : 함수 호출 결과로 나오는 타입을 조사 함수가 호출되는 것은 아님

	//c++ 14에서부터 아래 표기법 가능
	// auto자리에 우변을 넣어달라. 또는 우변으로 추론하는데 규칙은 decltype으로
	decltype(auto) ret3 = foo(1, 3.4);

}
