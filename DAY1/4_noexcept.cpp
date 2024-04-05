// 3_noexcept - 14 page
#include <iostream>
#include <exception>

// noexcept 의 2가지 용도
// 1. 함수가 예외가 있는지 조사
// 2. 함수가 예외가 없음을 알릴 때 


void foo() 
{
}
void goo()
{
	if (1) // 실패
		throw std::bad_alloc();
}
void foo_noexcept() noexcept
{
}
int main()
{
	// noexcept(함수호출식) : 함수 호출시 예외 가능성이 있는지 조사
	bool b1 = noexcept(foo()); // 예외가 없지만 컴파일 시 조사를 하기 때문에(실제 함수 호출이 아님) false
	// 왜냐하면 컴파일시 함수를 보는 부분은 선언부만 보고 내용은 보지 않음, 따라서 함수에 noexcept를 붙여 만든 사람이 보장함을 표시해야함
	bool b2 = noexcept(goo()); // 예외가 있으므로 false
	bool b3 = noexcept(foo_noexcept());
	std::cout << b1 << ", " << b2 << ", " << b3 << std::endl;

}




