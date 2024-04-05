// 10_user_define_literal2
#include <iostream>
#include <string>
#include <chrono>
#include <thread>
// using namespace std::chrono; 
using namespace std::literals;

void foo(const char* s) { std::cout << "char*" << std::endl; }
void foo(std::string s) { std::cout << "string" << std::endl; }

int main()
{
	foo("hello");
	foo("hello"s);	// std::string operator""s("hello")

	std::chrono::seconds s1(3); // 이 코드 대신
	auto s2 = 3s;
	auto s3 = 1h + 3min + 20s;
	std::cout << s3 << std::endl;
				
}


