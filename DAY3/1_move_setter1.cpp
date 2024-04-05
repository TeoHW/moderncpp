#include <iostream>
#include <fstream>
#include <string>
#include <vector>
int main()
{
	std::vector<std::string> v;
	std::ifstream fin("1_move_setter1.cpp");
	std::string s;
	while( std::getline(fin, s) )
	{
		// v.push_back(s);
		v.push_back(std::move(s));	// 이렇게 해야 line string을 복사하지 않고 move시킴
	}
	for(const auto& e : v)
		std::cout << e << '\n';
}
// 파일의 모든 내용을 한줄씩 읽어서
// vector 에 저장하는 코드 입니다.
// 개선점을 찾아 보세요
