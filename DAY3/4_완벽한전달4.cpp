// 7_완벽한전달1 - 113 page
#include <iostream>

void foo(int a)  {}
void goo(int& a) { a = 100; }

void hoo(int&& a) {}


template<typename F>
void chronometry( F f, int& arg)
{
	f(arg);
}

// main					chronometry						hoo(int&&)
// hoo(10) ================================================> ok
// chronometry(10) =====> int&& arg = 10
//						  hoo(arg) =========================> error
//															arg는 lvalue
//						hoo(static_cast<int&&>(arg)) ======>ok. 

template<typename F>
void chronometry( F f, int&& arg)
{
//	f(arg);		// 이렇게 하면 arg는 lvalue 이므로
				// hoo(int&) 를 찾게 됩니다.

// 사용자가 10(rvalue)를 보냈는데, 받으면서 lvalue 로 변경되었습니다
// 다시 rvalue로 변경해서 함수에 전달하면 됩니다.
	f( static_cast<int&&>(arg));
}


int main()
{
	hoo(10); // ok

	chronometry(hoo, 10);  
}

