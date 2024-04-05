// 5_range_for1.cpp   21 page
#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };

	// 전통적인 for 문
	for (int i = 0; i < v.size(); i++)
	{
		std::cout << i << std::endl;
	}

	// c++11 의 새로운 for- range for라는 이름을 가진 문법
	for(auto i:v){
		std::cout << i << std::endl;
	}
}















