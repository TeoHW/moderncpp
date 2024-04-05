#include <iostream>
#include <vector>

template<typename ... Ts>
void add_vector(std::vector<int>& v, Ts ... args)
{
	// args 의 모든 요소를 v에 넣에 보세요
}
int main()
{
	std::vector<int> v;
	add_vector(v, 1,2,3,4,5);

	for( auto e : v)
		std::cout << e << ", ";
}