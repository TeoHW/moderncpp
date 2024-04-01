// 3_noexcept - 14 page
#include <iostream>
#include <exception>

// noexcept 의 2가지 용도
// 1. 함수가 예외가 있는지 조사할때
// 2. 함수가 예외가 없음을 알릴때

void foo() 
{
}
void goo()
{
	if (1) // 실패
		throw std::bad_alloc();
}

int main()
{
	// noexcept( 함수 호출식 ) : 함수호출시 예외 가능성이 있는지 조사
	bool b1 = noexcept( foo() );
	bool b2 = noexcept( goo() );
}




