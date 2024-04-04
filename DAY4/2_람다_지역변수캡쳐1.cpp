﻿// 6_람다_지역변수캡쳐1 - 146
#include <iostream>

int g = 10;

int main()
{
	int v1 = 10, v2 = 10;

	// 1. 람다표현식에서 전역변수
	// => 접근 가능.
	auto f1 = [](int a) { return a + g; };

	// 2. 지역변수 접근
	// => 캡쳐하면 접근 가능
//	auto f2 = [](int a) { return a + v1 + v2; }; // error
	auto f2 = [v1, v2](int a) { return a + v1 + v2; }; // ok

	// 3. 캡쳐된 변수 쓰기
	// => mutable 람다만 쓰기 가능.
//	auto f3 = [v1, v2](int a) {  v1 = a; v2 = a; }; // error
	auto f3 = [v1, v2](int a) mutable {  v1 = a; v2 = a; }; // ok
}





