#include <iostream>
#include <fstream>
#include <string>
#include <vector>

// 파일의 모든 내용을 한줄씩 읽어서
// vector 에 저장하는 코드 입니다.
// 개선점을 찾아 보세요

int main()
{
	std::vector<std::string> v;

	std::ifstream fin("1_move_setter1.cpp");

	std::string s;

	while( std::getline(fin, s) )
	{
//		v.push_back(s); // s 를 복사한 객체를 vector 에 추가하는 것
						// => s가 가진 문자열 자체를 다시 복사하게됩니다.

		v.push_back(std::move(s));	// 이렇게 하는 것이 좋은 코드
	}

	for(const auto& e : v)
		std::cout << e << '\n';
}