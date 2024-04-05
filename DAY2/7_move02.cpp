#include <iostream>
#include <string>
#include <vector>

// 왜 move가 중요한가 ? - 101 page 아래 있습니다.

// template<typename T>
// void Swap(T& a, T& b)
// {
// 	T tmp = a;
// 	a = b;
// 	b = tmp;
// }
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
	std::cout << s1 << s2 << std::endl;
}



