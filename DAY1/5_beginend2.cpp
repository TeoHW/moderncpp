#include <vector>
#include <list>
#include <iostream>

// 컨테이너 버전
template<typename T>
auto mybegin(T& c) { return c.begin();}

template<typename T>
auto myend(T& c) { return c.end();}

// 배열 버전
template<typenane T, int N>
auto mybegin( T(&arr)[N] ) { return arr; } // 배열의 이름은 배열의 주소

template<typenane T, int N>
auto myend( T(&arr)[N] ) { return arr + N; } 


int main()
{
	std::vector<int> v = { 1,2,3,4,5 };
	int x[5] = { 1,2,3,4,5 };

	// std::begin() 는 컨테이너와 vector 모두에 사용가능합니다.
	// => 직접 만들어서 원리를 생각해 봅시다.
	auto p1 = mybegin(v);
	auto p2 = mybegin(x);


}