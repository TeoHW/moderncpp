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
/*
	// 핵심 : 멤버 2개를 동시에 set 하는 setter
	void set(const std::string& n, const std::string& a)
	{
		name = n;
		address = a;
	}
	void set(std::string&& n, std::string&& a)
	{
		name = std::move(n);
		address = std::move(a);
	}	
	void set(const std::string& n, std::string&& a)
	{
		name = n;
		address = std::move(a);
	}	
	void set(std::string&& n, const std::string& a)
	{
		name = std::move(n);
		address = a;
	}	
	// 인자가 2개인 setter 가 move 를 지원하려면 => 4개 만들어야 합니다.
	// 인자가 N개인 setter 가 move 를 지원하려면 => 2^N 개 만들어야 합니다.

	// 다른 방법이 필요합니다.
	// => 완벽한 전달 기술을 사용하면 "함수템플릿" 한개로 모두 해결됩니다.
	*/
	template<typename T1, typename T2>
	void set(T1&& n, T2&& a)
	{
		name = std::forward<T1>(n);
		addr = std::forward<T2>(a);
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








