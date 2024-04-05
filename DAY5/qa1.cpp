#include <string>
#include <iostream>

int main()
{
	std::string s1 = "hello";
	std::string s2 = "hello";


	auto f1 = [other_name = std::move(s1)]() { };
//	auto f2 = [s1 = std::move(s2) ]() { };

	std::cout << s1 << std::endl; // ""
	std::cout << s2 << std::endl;
}