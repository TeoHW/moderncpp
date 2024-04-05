// 7_완벽한전달1 - 113 page
#include <iostream>

void foo(int a)  {}
void goo(int& a) { a = 100; }

void hoo(int&& a) {}

// T&& 를 사용하면 int& 와 int&& 버전의 함수를 자동생성할수 있습니다
// => 그런데 template 으로 자동생성 기술을 사용하려면
// => 2개 함수 구현부가 동일해야 합니다.
/*
template<typename F>
void chronometry( F f, int& arg)
{
//	f(arg);
	f( static_cast<int&>(arg) ); // 필요 없는 캐스팅입니다	
								// 하지만 있어도 에러 아니고
								// 컴파일 시간에 제거 되므로 성능저하도 없음.
}

template<typename F>
void chronometry( F f, int&& arg)
{
	f( static_cast<int&&>(arg));
}
*/

template<typename F, typename T>
void chronometry( F f, T&& arg)
{
	f( static_cast<T&&>(arg));
}
int main()
{
	int n = 0;
	// 아래 처럼 사용했을때 생성되는 함수의 모양과 캐스팅 코드의 모양을 생각해보세요
	chronometry( foo, 10);  // T = int, T&& = int&&
                            // ch(, int&& arg)
                            // => static_cast<int&&>(arg)
	chronometry( goo, n);   // T = int&, T&& = int&
                            // ch(, int& arg)
                            // => static_cast<int&>(arg)
}
