// 5_range_for1.cpp   21 page
#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };
	
	for (auto& n : v) 
	{
		std::cout << n << std::endl;
	}
	// 위 코드를 컴파일러가 아래 코드로 변경합니다.
	auto first = std::begin(v); // 또는 v.begin()
	auto last = std::end(v);    // v.end()

	for( ; first != last; ++first)
	{
		auto& b = *first;
		//---------------------------------
		std::cout << n << std::endl;
	}
}















