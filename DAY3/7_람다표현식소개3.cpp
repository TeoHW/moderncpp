#include "chronometry.h"
#include <vector>
#include <algorithm>

std::vector<int> v1;
std::vector<int> v2;

constexpr std::size_t size = 10'000'000; 	

void init()
{
	v1.reserve(size);
	v2.reserve(size);

	for( int i = 0; i < size; i++)
	{	
		int value = rand();

		v1.push_back(value);
		v2.push_back(value);
	}
}

bool cmp1(int a, int b) { return a < b; }

void use_function()
{
	std::sort(v1.begin(), v1.end(), cmp1);
}

void use_lambda()
{
	std::sort(v2.begin(), v2.end(), [](int a, int b) { return a < b;} );
}

int main()
{	
	init();

	// 람다 표현식 장점 2. 특정 상황에서 일반 함수 보다 빠르다.
	// 이 소스는 복습 하실때  -O2 옵션을 가지고 빌드하세요
	// g++ 소스이름.cpp -O2
	chronometry(use_lambda);
	chronometry(use_function);
	
}