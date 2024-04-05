#include <vector>
#include <iostream>
#include <algorithm>

bool foo(int n) { return n%3 == 0; }

int main()
{
	std::vector<int> v = {1,2,6,4,5,3,7,8,9,10};

	// 주어진 구간에서 3을 찾고 싶다.
	auto ret1 = std::find( v.begin(), v.end(), 3);

	// 주어진 구간에서 3의 배수를 찾고 싶다.
	// auto ret1 = std::find_if( v.begin(), v.end(), 함수);
	auto ret2 = std::find_if( v.begin(), v.end(), foo);
	// 람다표현식 (lambda expression)
	auto ret3 = std::find_if( v.begin(), v.end(), [](int n){return n%3 == 0;});
	// std::cout << ret1 << ret2 << ret3 << std::endl;	
}