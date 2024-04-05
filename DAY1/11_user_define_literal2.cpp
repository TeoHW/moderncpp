// 10_user_define_literal2
#include <iostream>
#include <string>
#include <chrono>
#include <thread>
using namespace std::literals; 


void foo(const char* s) { std::cout << "char*"; }  // 1
void foo(std::string s) { std::cout << "string"; } // 2

int main()
{
	foo("hello"); // "hello" 는 const char[6] 인데
				  // => const char* 로 암시적 변환 가능. 그래서 1
	foo("hello"s); // 2
				   // std::string operator""s("hello")

	std::chrono::seconds s1(3); // 이 코드 대신
	auto s2 = 3s;               // 이렇게 하면 됩니다.

	auto s3 = 1h + 3min + 20s;

	// 위와 같은 표준의 "literal 접미사" 를 사용하려면
	// using namespace std::literals  이 필요 합니다.			 
}


