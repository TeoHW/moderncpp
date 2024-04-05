#include <iostream>

template<typename T> void foo(T a)
{
	// T의 타입을 알고 싶다.
	// 1. godbolt.org 에 넣어 보세요
	// 2. 생성된 함수 이름 출력
	// __func__ : C++ 표준 매크로 - 함수 이름만 담고 있다.
	// __PRETTY_FUNCTION__ : 함수이름 + 인자모양, 단, C++ 표준 아님.
	//						g++, clang 에서만 사용가능
	// __FUNCSIG__ : Visual studio 컴파일러
	
	//std::cout << __func__ << std::endl;
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

int main()
{	
	// 타입을 전달하는 경우.
	// => 사용자가 전달한 타입 사용
	foo<int>(3.4);

	// 타입인자를 생략하면
	// => 함수 인자를 보고 타입을 추론
	// T의 타입을 예측해 보세요
	foo(10); // T : int
	foo(3.4);// T : double

/*
	int n = 10;
	int& r = n;
	const int c = 10;
	const int& cr = c;
	
	foo(n); 
	foo(c); 
	foo(r); 
	foo(cr);
	*/
}
