#include <iostream>

class X {};

void foo(X& a)		{ std::cout << "X&" << std::endl; }
void foo(const X& a){ std::cout << "const X&" << std::endl; }
void foo(X&& a)		{ std::cout << "X&&" << std::endl; }

int main()
{
	X&& obj = X{};

	foo( X{} );
	foo( obj );
}







