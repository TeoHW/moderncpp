﻿#include <iostream>

template<typename T> void foo(T a)
{
	// T의 타입을 알고 싶다.
	// 1. godbolt.org 에 넣어 보세요
	// 
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
