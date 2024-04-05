#include <string>
#include <algorithm>

int main()
{
	int x = 1, y = 2;

	std::string s1 = "AAA";
	std::string s2 = "BBB";

	// 다음중 에러를 모두 찾으세요
	int ret1 = std::max(s1, s2); // ok
	int ret2 = std::max(x , y ); // ok
	int ret3 = max(s1, s2);		// s1 이 std:: 안에 있는 타입 
								// ADL 때문에 자동 검색됨.
//	int ret4 = max(x , y );		// int 이므로 std:: 에 있지 않음
								// error

}