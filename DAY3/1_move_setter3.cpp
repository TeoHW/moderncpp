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
	void set_name(const std::string& n) { name = n; }
	void set_name(std::string&& n) { name = std::move(n); }

	template<typename T>
	void set_name2(T&& n){
		// name = n;					// 항상 copy
		// name = std::move(n);		// 항상 move
		name = std::forward<T>(n);	// lvalue/rvalue에 따라 다르게 처리
	}
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








