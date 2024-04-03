#include <iostream>
#include <string>
#include <vector>

// 핵심 : Setter 만들기 #1

class People
{
private:
	std::string name;
	int age;

public:
	// 아래 한줄에 대해서 생각해 보세요. 최선의 코드일까요 ?
	// C++98 시절에는 "최선의 코드"
	// C++11 에서는 최선은 아닙니다.
//	void set_name(const std::string& n) { name = n; } // 항상 복사
//	void set_name(const std::string& n) { name = std::move(n); } // 이렇게 해도 항상 복사

	// C++11 이후의 최선의 setter : 2개를 만들어야 합니다
	void set_name(const std::string& n) { name = n; }
	void set_name(std::string&& n) { name = std::move(n); }

};

int main()
{
	std::string s1 = "kim";
	std::string s2 = "lee";

	People p;
	p.set_name(s1);
	p.set_name(std::move(s2));	

	std::cout << s1 << std::endl; // "kim"
	std::cout << s2 << std::endl; // ""

}








