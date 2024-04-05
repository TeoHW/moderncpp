#include <string>
#include <iostream>

int main()
{
	std::string s1 = "hello";
	std::string s2 = "hello";

	auto f1 = [other_name = std::move(s1)]() { }; // ok
//	auto f2 = [s2 = std::move(s2) ]() { };		  // ok
//	auto f3 = [std::move(s2) ]() { };		  // error
	auto f3 = [move(s2) ]() { };		  // ok.
	//        [move = s2]() { move 라는 변수이름 사용}

	std::cout << s1 << std::endl; // ""
	std::cout << s2 << std::endl;
}