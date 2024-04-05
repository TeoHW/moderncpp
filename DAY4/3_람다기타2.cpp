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
	auto f = [](int a, int b) { std::cout << "lambda\n"; };
	register_callback(&foo);
	register_callback([](int a, int b) { std::cout << "lambda\n"; });
	register_callback(f);

	int n = 0;
	register_callback([&n](int a, int b) { std::cout << "lambda\n"; });
	//핵심 : 캡쳐하지 않은 람다 표현식만 함수 포인터로 변환 가능하다. 
	
}
