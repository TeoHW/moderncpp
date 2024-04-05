#include <iostream>
#include <string>
#include <vector>

// 왜 move가 중요한가 ? - 101 page 아래 있습니다.

// 아래 swap 은 복사에 의한 swap 입니다.
// => 성능이 나쁩니다.
template<typename T>
void Swap(T& a, T& b)
{
	T tmp = a; // 복사 생성자
	a = b;
	b = tmp;
}
// 아래 코드가 이동에 의한 swap 입니다.
// => 빠르게 동작합니다
template<typename T>
void Swap(T& a, T& b)
{
	T tmp = std::move(a); 
	a = std::move(b);
	b = std::move(tmp);
}

int main()
{
	std::string s1 = "hello";
	std::string s2 = "world";
	Swap(s1, s2);
}



