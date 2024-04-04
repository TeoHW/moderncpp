﻿// 6_람다_지역변수캡쳐1 - 146
#include <iostream>

int g = 10;

int main()
{
	int v1 = 0, v2 = 0;

	auto f2 = [v1, v2](int a) { v1 = a; v2 = a; }; 

	f2(100);

	// 람다 지역변수 캡쳐의 원리
	// => 멤버 데이타를 생성하는 것
	class CompilerGeneratedName
	{
		int v1;
		int v2;
	public:
		CompilerGeneratedName(int a, int b) : v1{a}, v2{b} {}

		inline auto operator()(int a) const 
		{ 
			v1 = a; 
			v2 = a; 
		}
	};
	auto f2 = CompilerGeneratedName{v1, v2}; // <= 여기 v1, v2는
											 // main 의 지역변수
}





