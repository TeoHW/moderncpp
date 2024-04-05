// 3_noexcept - 14 page
#include <iostream>
#include <exception>

// noexcept 의 2가지 용도
// 1. 함수가 예외가 있는지 조사할때
// 2. 함수가 예외가 없음을 알릴때

//void foo()         // 이렇게 하면 예외 가능성이 있는 함수
void foo() noexcept  // 이렇게 하면 예외 가능성이 없음을 컴파일러에게 알리는것
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
	//						=> 실제 함수를 호출하는 것이 아니라
	//						=> 컴파일 할때 조사
	bool b1 = noexcept( foo() ); // false
								 // 단, noexcept 가 붙어 있으면 true
	bool b2 = noexcept( goo() ); // false

	std::cout << b1 << ", " << b2 << std::endl;
}




