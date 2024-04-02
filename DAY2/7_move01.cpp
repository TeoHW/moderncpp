#include <iostream>
#include <string>
#include <vector>

// move 개념

int main()
{
	std::string s1 = "hello";
	std::string s2 = "hello";

	std::string s3 = s1;	// 자원을 복사
	std::string s4 = std::move(s2);	// 자원을 이동(s2의 자원을 s4가 빼앗는것)

	std::cout << s1 << std::endl; // "hello"
	std::cout << s2 << std::endl; // ""


}

