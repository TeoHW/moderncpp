// 11_rawstring
#include <iostream>
#include <string>

int main()
{
	// 기존 문자열의 '\' 는 특수문자를 표기하기 위한 문자
	// "\\" 하면 \ 를 한개 표기 한것

	std::string s1 = "\\\\.\\pipe\\server";

	// Raw String 문자열 : \ 를 일반 문자로 취급
	std::string s2 = R"(\\.\pipe\server)";

	std::cout << s1 << std::endl;
	std::cout << s2 << std::endl;
}


