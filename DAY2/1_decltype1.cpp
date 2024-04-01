#include <iostream>

// decltype 추론 규칙을 이해하기 위한 사전 지식.

int x = 0;

int  f1() { return x; }  // x 자체를 반환하는 것이 아닌 값 "0" 반환
int& f2() { return x; }  // x 자체를 반환(x의 별명 반환)

int main()
{
	f1() = 20; // error. "0 = 20"
	f2() = 20; // ok.    "x = 20"

	// 핵심 : reference 를 반환하는 함수는 등호의 왼쪽에 올수 있다.
	//		 						    ( lvalue 가 될수 있다.)
}
