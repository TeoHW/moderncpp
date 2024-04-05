// 11_rawstring
#include <iostream>
#include <string>

int main()
{
	// 기존 문자열의 '\' 는 특수문자를 표기하기 위한 문자
	// "\\" 하면 \ 를 한개 표기 한것

	std::string s1 = "\\\\.\\pipe\\server";

	// Raw String 문자열 : \ 를 일반 문자로 취급
	// R : Raw String 문자열 임을 나타내고
	// "( : 시작
	// )" : 종료
	std::string s2 = R"(\\.\pipe\server)";

	std::cout << s1 << std::endl;
	std::cout << s2 << std::endl;

	// " 를 표기 하려면
	std::string s3 = R"(\\.\pi"pe\server)";

	// 종료의 의미인 )" 를 표기하려면 => 시작과 끝을 나타내는 표시를 변경
	// 아래 코드는
	// "***( : 시작
	// )***" : 종료
	std::string s4 = R"***(\\.\pi)"pe\server)***";
}


