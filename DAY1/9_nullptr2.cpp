// 8_nullptr2
#include <iostream>
struct mynullptr_t
{
	template<typename T>
	operator T*() { return 0; }
};

void foo(int* p) {}

template<typename F, typename ARG>
void forward_parameter(F f, ARG arg)
{
	f(arg);
}

int main()
{
	int n = 0;
	// foo(0); // bad code
	foo(nullptr); // good code
	// foo(n); // 0을 담고 있는 정수형 변수는 안된다. 
	foo(&n);

	// forward_parameter(foo,  0); // 에러 발생 - 0은 int형으로 전달되기 때문에 int*형으로 변형할 수 없다
	forward_parameter(foo, nullptr);	// 이건 성공
	// forward_parameter(foo, n); // 에러 발생 - n은 int형으로 전달되기 때문에 int*으로 안됨
	mynullptr_t mynullptr;
	forward_parameter(foo, mynullptr);

}








