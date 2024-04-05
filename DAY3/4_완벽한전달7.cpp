// 7_완벽한전달1 - 113 page
#include <iostream>

void foo(int a)  {}
void goo(int& a) { a = 100; }

void hoo(int&& a) {}


template<typename F, typename T>
void chronometry( F f, T&& arg)
{
	// f( static_cast<T&&>(arg));
    f(std::forward<T>(arg));    // 이 코드가 위 코드와 완전히 동일합니다.

    // 참고
    // static_cast<T&&>(arg) 캐스팅은
    // => 항상 rvalue로 캐스팅한다? 아니! 전달된 arg에 따라 결정된다.
    // rvalue(10)을 전달하면 받으면서 lvalue로 전달되기 때문에 이것을 다시 rvalue로 캐스팅해서 전달한다
    // lvalue(n)은 받으면서 여전히 lvalue이고 필요없지만 동일한 형식을 유지하여 lvalue로 캐스팅하여 전달한다. 
}
int main()
{
	int n = 0;
	// 아래 처럼 사용했을때 생성되는 함수의 모양과 캐스팅 코드의 모양을 생각해보세요
	chronometry( foo, 10);  
	chronometry( goo, n);   
                            
                            
}
