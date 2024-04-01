// 4_beginend - 16 page
#include <vector>
#include <list>
#include <iostream>

int main()
{
	//std::vector<int> v = { 1,2,3,4,5 };
	//std::list<int>   v = { 1,2,3,4,5 };
	int v[5] = { 1,2,3,4,5 };

	// C++98 시절에 반복자를 꺼내는 코드
	// => 단점 : 복잡해 보이고, 컨테이너 변경시 아래 코드도 변경해야합니다
//	std::vector<int>::iterator p1 = v.begin();
//	std::vector<int>::iterator p2 = v.end();

	// C++11 이후라면 auto 사용하세요 - 강력 권장
	// => 단, 아래 코드는 v 가 "raw array" 라면 에러 입니다.
//	auto p1 = v.begin();
//	auto p2 = v.end();

	// 아래 처럼하면 v가 컨테이너, "raw array" 모두 가능합니다.
	// => raw array 라면 p1 은 int* 입니다.
	auto p1 = std::begin(v);
	auto p2 = std::end(v);

//	auto sz1 = v.size();	 // 배열은 안됨
	auto sz1 = std::size(v); // 배열도 가능

	// C++11 부터, 배열도 가능하게 하기 위해
	// 위와같이 다양한 "일반함수"도 제공합니다.
}
