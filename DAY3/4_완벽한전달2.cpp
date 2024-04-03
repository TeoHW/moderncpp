// 7_완벽한전달1 - 113 page
#include <iostream>

void foo(int a)  {}
void goo(int& a) { a = 100; }


// 완벽한 전달을 하려면
// 1. 인자의 복사본이 없어야 하고(call by value 가 아닌 reference)
// 2. const 속성의 추가도 없어야 한다.
// 결국 아래 처럼 2개 만들어야 합니다.
// 그런데, 아래 코드는 "한개의 문제"가 있습니다. 
// => 다음 소스 참고

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
	int n = 10;

	chronometry(foo, 10); 
	chronometry(goo, n);  

	std::cout << n << std::endl;
}

