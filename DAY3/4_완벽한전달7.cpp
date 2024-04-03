// 7_완벽한전달1 - 113 page
#include <iostream>

void foo(int a)  {}
void goo(int& a) { a = 100; }
void hoo(int&& a) {}


template<typename F, typename T>
void chronometry( F f, T&& arg)
{
//	f( static_cast<T&&>(arg) );
	f( std::forward<T>(arg) ); // 이 코드가 위코드와 완전히 동일합니다.

	// 참고
	// static_cast<T&&>(arg) 캐스팅은
	// => 항상 rvalue 로 캐스팅한다 ???  아닙니다.

	// chronometry의 2번째 인자로
	// rvalue(10) 를 전달하면 (받으면서 lvalue 가 된것을) 다시 rvalue로 캐스팅하고
	// lvalue(n)  를 전달하면 (필요 없는 캐스팅이지만)    다시 lvalue로 캐스팅합니다.
}

int main()
{
	int n = 0;

	chronometry( foo, 10); 
	chronometry( goo, n);	
}

