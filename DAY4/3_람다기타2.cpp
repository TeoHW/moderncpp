#include <iostream>

// C 언어로 만들었던 함수.
// => 인자로 함수 포인터를 받는 함수.
void register_callback( void(*f)(int, int) )
{
	f(1, 2);
	f(1, 2);
	f(1, 2);
}

void foo(int a, int b) 
{
	std::cout << "foo\n";
}
int main()
{
	register_callback(&foo);

	register_callback( [](int a, int b) { std::cout << "lambda\n"; } );
}
