// 7_완벽한전달1 - 113 page
#include <iostream>
int cnt;
void foo(int a)  { a = 999; cnt++;}
void goo(int& a) { a += 100; cnt++; std::cout << a << std::endl;}



// 특정 함수의 수행 시간 측정
template<typename F, typename T>
void chronometry( F f, T&& arg)
{
	// 현재 시간 기록
	f(arg);
	// 시간을 구해서 "f(arg)" 수행 시간 출력
}

int main()
{
	int n = 10;

	foo(10);
	// goo(n);
	chronometry(foo, 10);
	chronometry(goo, n);
	std::cout << n << std::endl;
	chronometry(goo, 30);
	std::cout << n << std::endl;
	std::cout << cnt << std::endl;
}

