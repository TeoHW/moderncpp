// 7_완벽한전달1 - 113 page
#include <iostream>

void foo(int a)  {}
void goo(int& a) { a = 100; }

void hoo(int&& a){}


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
    hoo(10);
	int n = 10;
    chronometry(hoo, 10);   // error: cannot bind rvalue reference of type 'int&&' to lvalue of type 'int'

	std::cout << n << std::endl;
}
