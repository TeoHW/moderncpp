#include <iostream>

int x = 0;

int& foo(int n, double d) { return x; }

int main()
{
	// ret1 의 타입은 ?
	auto ret1 = foo(1, 3.4); // int ret1 = foo(1, 3.4)

	// 함수반환 타입을 정확히 추론해서 받으려면
	// decltype( 함수 호출식 ) : 함수 호출의 결과로 나오는 타입을 조사
	//						    함수가 호출되는 것은 아님.
	//							함수의 선언을 보고 반환 타입을 조사한것
	decltype( foo(1, 3.4) ) ret2 = foo(1, 3.4);
	// int& ret = foo(1, 3.4)

	// C++14 부터 아래 표기법 가능 
	// decltype(auto) : auto 자리에 우변을 넣어달라. 라고 해석하거나
	//				    또는, 우변으로 추론하는데, 규칙은 decltype으로 해달라
	decltype( auto ) ret2 = foo(1, 3.4);
}
