#include <iostream>
#include <vector>
#include <algorithm>

struct People
{
	// name, addr
	int age;
	People(int a) : age(a) {}
};

int main()
{
	std::vector<People> v;
	v.emplace_back(10); // v.push_back(People(10)) 의미.
	v.emplace_back(20);
	v.emplace_back(15);

	// 나이가 n 사람을 찾고 싶다. ?
	int n = 15;
	auto ret = std::find_if(v.begin(), v.end(), [&n](const People& p){return n == p.age;} );
}







