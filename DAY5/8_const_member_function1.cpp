#include <iostream>

class Sample
{
public:
	// 핵심 : 동일한 이름의 멤버 함수를 상수 함수와 비상수 함수로 동시에 제공가능
	void foo()       { std::cout << "1. foo\n";}
	void foo() const { std::cout << "2. foo const\n";}
};

int main()
{
	Sample s;
	const Sample cs;

	s.foo();	// 1번 호출, 없으면 2번 호출
	cs.foo();	// 2번만 호출 가능. 없으면 에러

	//  상수 객체는 상수 멤버 함수만 호출가능
	// 비상수 객체는 모두 호출 가능. 비상수멤버 함수가 우선 선택
	
}