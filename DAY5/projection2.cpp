#include <iostream>
#include <algorithm>
#include <functional>
#include <string>

int main()
{
	std::string s1 = "AAAA";
	std::string s2 = "XX";

	auto ret1 = std::ranges::max(s1, s2); // "XX"
	auto ret2 = std::ranges::max(s1, s2, std::less{}, [](const std::string& s){ return s.size();}); 
}
