#include <iostream>
#include <string>

template<typename T>
const T& Max(const T& a, const T& b)
{
	return a < b ? b : a;
}

int main()
{
	std::string s1 = "AAAA";
	std::string s2 = "XX";

	std::cout<< Max(s1, s2) << std::endl; // "XX"

	// s1, s2 중에서 문자열의 "길이가 큰" 문자열을 얻고 싶다.
	auto ret1 = Max( s1.size(), s2.size()  ); // ret1 의 타입은 int

	// 아래 2가지 사용법중 좋은 것을 골라 보세요

	// #1. 이항 함수를 사용
	auto ret1 = Max( s1, s2, 
				[](const std::string& a, const std::string& b) { return a.size() < b.size();}

	// #2. 단항 함수를 사용
	auto ret2 = Max( s1, s2, [](const std::string& s) {return s.size();});
}
