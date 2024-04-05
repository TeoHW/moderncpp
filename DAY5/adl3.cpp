#include <string>
#include <algorithm>

int main()
{
	int x = 1, y = 2;

	std::string s1 = "AAA";
	std::string s2 = "BBB";

	// 다음중 에러를 모두 찾으세요
	int ret1 = std::max(s1, s2);
	int ret2 = std::max(x , y );
	int ret3 = max(s1, s2);
	int ret4 = max(x , y );

}