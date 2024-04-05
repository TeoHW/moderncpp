#include <iostream>
#include <string>
#include <vector>
#include <array>

// 핵심 : Setter 만들기 #3

class People
{
private:
	std::string name;
	std::string address;
public:
	// void set(const std::string& n, const std::string& a)
	// {
	// 	name = n;
	// 	address = a;
	// }
	// 모든 move case를 지원하려면 같은 함수를 2^N개를 만들어야 한다. 
	// 그래서 필요한 것이 완벽한 전달!!
	template<typename T1, typename T2>
	void set(T1&& n, T2&& a)
	{
		name = std::forward<T1>(n);
		address = std::forward<T2>(a);
	}

};

int main()
{
	std::string name = "kim";
	std::string addr = "seoul";

	People p;
	p.set(name,			   addr);
	p.set(std::move(name), addr);
	p.set(name,			   std::move(addr));
	p.set(std::move(name), std::move(addr));
}








