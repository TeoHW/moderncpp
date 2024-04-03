// 7_완벽한전달1 - 113 page
#include <iostream>

void foo(int a)  {}
void goo(int& a) { a = 100; }

void hoo(int&& a) {}


template<typename F>
void chronometry( F f, int& arg)
{
	f(arg);
}

template<typename F>
void chronometry( F f, int&& arg)
{
	f(arg);
}


int main()
{
	hoo(10); // ok

	chronometry(hoo, 10);  // 이코드가 현재 에러 입니다.
						   // 이문제만 해결하면 됩니다.
						   // => 해결은 다음소스.
}

