// 8_nullptr2
#include <iostream>

template<typename F, typename ARG>
void forward_parameter(F f, ARG arg) // int arg = 0 이므로 foo(arg)
{
	f(arg);
}

void foo(int* p) {}

int main()
{
	int n = 0;
	foo(0); // ok
//	foo(n);	// error. literal 0은 포인터로 암시적 형변환 되지만 
			//        0으로 초기화된 변수를 전달할수는 없습니다.

	foo(0); // ok. 
//	forward_parameter(foo, 0); // foo(0) 으로 실행해 달라는 의도 ?
								// 하지만 error.
	forward_parameter(foo, nullptr); // 이렇게 하면 ok.
}








