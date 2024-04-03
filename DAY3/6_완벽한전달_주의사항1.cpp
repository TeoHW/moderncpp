// 9_완벽한전달_주의사항
#include <iostream>

template<typename F, typename T>
void chronometry(F f, T&& arg) // int&& arg = 0
{								// foo(arg) 의 모양인데, arg 는 int 이므로
	f(std::forward<T>(arg));	// foo(int*) 에는 전달 안됨.
}

void foo(int* p) {}

int main()
{
	foo(0); // ok

//	chronometry(foo, 0); // error
	chronometry(foo, nullptr); // ok - 1일차 nullptr 예제 참고

}









