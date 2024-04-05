// 7_완벽한전달1 - 113 page
#include <iostream>

void foo(int a)  {}
void goo(int& a) { a = 100; }

void hoo(int&& a) {}

// 결론 : 인자 한개를 완벽히 전달하려면
// 1. forwarding reference(T&&) 로 받으세요
// 2. 다른 함수에 보낼 때 std::forward<T>(arg)로 해서 보내면 됩니다. 
// T&& 는 대부분 forwarding 하기 위해서 사용하기 때문에
// 이름을 forwarding reference라고 결정했습니다. 


template<typename F, typename T>
void chronometry( F f, T&& arg)
{
    f(std::forward<T>(arg));

}
int main()
{
	int n = 0;

	chronometry( foo, 10);  
	chronometry( goo, n);   
                            
                            
}
