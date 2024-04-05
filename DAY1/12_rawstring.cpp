// 11_rawstring
#include <iostream>
#include <string>

int main()
{
	std::string s1 = "\\\\.\\pipe\\server"; // \\.\pipe\server
	std::cout << s1 << std::endl;			// \\.\pipe\server

	// R 은 raw string의 시작을 의미
	// "( : 시작
	// )" : 끝
	std::string s2 = R"(\\.\pipe\server)"; 	// \\.\pipe\server
	std::cout << s2 << std::endl;			// \\.\pipe\server

	// " 를 표기하려면
	std::string s3 = R"(\\.\pip"e\server)"; 	
	std::cout << s3 << std::endl;	
	// 종료의 의미인 )" 를 표기하려면
	// 시작과 끝의 형태를 동일하게 변경하면 된다. " 과 ( 괄호의 사이에 특정 문자 추가 가능
	std::string s3 = R"**(\\.\pip)"e\server)**";
}
