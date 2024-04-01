// 19_structure_binding - 52 page
#include <map>
#include <string>

struct Point3D
{
	int x = 0, y = 0, z = 0;
};
int main()
{
	Point3D p3d;

	// 모든 멤버를 꺼내고 싶다.. util C++14
//	int x = p3d.x;
//	int y = p3d.y;
//	int z = p3d.z;

	// C++17 위 3줄을 아래처럼 한줄로 가능 ( 위 3줄과 완전히 동일)
	auto[x, y, z] = p3d;

//	auto[x, y, _] = p3d;    // error. 갯수가 동일해야 합니다

//	int[x, y, z] = p3d;    // error. auto 만 가능.

	//------------------------------------------
	// 배열도 가능
	int x2[] = {1,2,3};
	auto[a, b, c] = x2;


	//-------------------------
	// map 을 열거 할때 편리합니다.
	std::map<std::string, std::string> m;

	m["mon"] = "월요일";

	// map은 pair를 보관합니다.
	std::pair<std::string, std::string> p;
	p.first = "tue";
	p.second = "화요일";
	m.insert(p);

	for(auto& e : m )
	{
		// e 는 pair 입니다.
		const std::string& key = e.first;
		const std::string& value = e.second;
	}

	// C++17 스타일
	for( const auto&[key, value]  : m )
	{
		
	}
}

