// 19_structure_binding - 52 page
#include <map>
#include <string>
#include <iostream>

struct Point3D
{
	int x = 0, y = 0, z = 0;
};
int main()
{
	Point3D p3d;

	// 모든 멤버를 꺼내고 싶다.. util C++14
	int x = p3d.x;
	int y = p3d.y;
	int z = p3d.z;
	// 위 3줄을 아래처럼 한줄로 가능 C++17
	auto[a1,a2,a3] = p3d;
	// auto[a1,a2] = p3d;  // error. 갯수가 동일해야 합니다
	// int[a1,a2,a3] = p3d; // error. 무조건 auto로 받아야함
	// 배열도 가능
	int x2[] = {1,2,3};
	auto[a,b,c] = x2;


	//-------------------------
	// map을 열거 할 때 편리합니다. 
	std::map<std::string, std::string> m;

	m["mon"] = "월요일";

	// map은 pair를 보관합니다.
	std::pair<std::string, std::string> p;
	p.first = "tue";
	p.second = "화요일";
	m.insert(p);

	for(auto& e : m){
		// e 는  pair입니다.
		std::string key = e.first;
		std::string value = e.second;
	}

	for(const auto& [key, value] : m){
		// c++17 한번에 pair에 해당하는 정보를 key와 value로 가져옴
	}

}

// 파이썬 스러운 c++ 코딩
std::tuple<int, double> foo1()
{
	return std::make_tuple(1, 3.4);
}

auto[a,b] = foo1();

