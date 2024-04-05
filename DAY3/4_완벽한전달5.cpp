// 7_완벽한전달1 - 113 page
#include <iostream>

void foo(int a)  {}
void goo(int& a) { a = 100; }

void hoo(int&& a) {}

// int 한개를 완벽한 전달을 하려면
// 1. int&, int&& 버전을 각각 제공하고
// 2. int&& 에서만 static_cast<int&&>(arg) 를 하면 됩니다.

// 다음 단계에서 int 가 아닌 임의 타입으로 확장해 봅시다.

template<typename F>
void chronometry( F f, int& arg)
{
	f(arg);
}

template<typename F>
void chronometry( F f, int&& arg)
{
	f( static_cast<int&&>(arg));
}


int main()
{
	hoo(10); // ok

	chronometry(hoo, 10);  
}
