// 7_완벽한전달1 - 113 page
#include <iostream>

void foo(int a)  {}
void goo(int& a) { a = 100; }

void hoo(int&& a) {}

// T&& 를 사용하면 int& 와 int&& 버전의 함수를 자동생성할수 있습니다
// => 그런데 template 으로 자동생성 기술을 사용하려면
// => 2개 함수 구현부가 동일해야 합니다.
template<typename F>
void chronometry( F f, int& arg)
{
//	f(arg);
	f(static_cast<int&>(arg)); // 필요 없는 캐스팅입니다	
								// 하지만 있어도 에러 아니고
								// 컴파일 시간에 제거 되므로 성능저하도 없음.
}

template<typename F>
void chronometry( F f, int&& arg)
{
	f( static_cast<int&&>(arg));
}


int main()
{
	hoo(10); // ok

	chronometry(hoo, 10);  
}

