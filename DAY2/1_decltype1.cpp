#include <iostream>

int x = 0;

int  f1() { return x; } // x를 반환하는 것이 아닌 0을 반환하는 것임
int& f2() { return x; } // x를 반환하는 것

int main()
{
	f1() = 20;
	f2() = 20; // ok, ref &로 반환하면 lvalue가 될 수 있다.
}
