﻿// 7_완벽한전달1 - 113 page
#include <iostream>

void foo(int a)  {}
void goo(int& a) { a = 100; }

// forwarding : 전달받은 함수 인자를 다른 함수에 다시 보내는 것
// perfect forwarding : 어떠한 변화도 없이 그대로 보내 주는 것

// chronometry : 특정 함수의 수행시간 측정
template<typename F, typename T>
void chronometry( F f, const T& arg)
{
	// 현재 시간 기록
	f(arg);
	// 시간을 구해서 "f(arg)" 수행 시간 출력
}

int main()
{
	int n = 10;

//	goo(n);
	chronometry(foo, 10); // foo(10);
	chronometry(goo, n);  // goo(n);

	std::cout << n << std::endl;
}

