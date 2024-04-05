#include <iostream>

// function object(함수 객체)
// => () 연산자를 재정의 해서 함수 처럼 사용가능한 객체

// 일반함수로 안하고 왜 함수객체로 하나?
// 장점이 많다. 
// 빠르고, 상태도 있고
// c++20부터 추가되는 대부분의 표준은 함수가 아니라 함수 객체이다. 

struct Plus
{
	int operator()(int a, int b)
	{
		return a + b;
	}
};

int main()
{
	Plus p;	// p는 함수가 아닌 객체(Plus 구조체) 입니다.

	int n1 = p(1, 2); // 객체인 p를 함수 처럼 사용합니다. "함수객체"라고합니다
	int n1 = p.operator()(1,2); // 위 코드를 이렇게 해석합니다.
								// 직접, 이렇게 사용해도 됩니다.
	
}