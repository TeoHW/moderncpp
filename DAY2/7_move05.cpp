// std::move()소개
#include <iostream>
#include <cstring>

class Cat
{
	char* name;
	int   age;
public:
	Cat(const char* n, int a) : age(a)
	{
		name = new char[strlen(n) + 1];
		strcpy_s(name, strlen(n) + 1, n);
	}
	~Cat() { delete[] name; }

	Cat(const Cat& c) : age(c.age)
	{
		name = new char[strlen(c.name) + 1];
		strcpy_s(name, strlen(c.name) + 1, c.name);
		std::cout << "복사" << std::endl;
	}

	Cat(Cat&& c) : age(c.age), name(c.name)
	{
		c.name = nullptr;
		std::cout << "이동" << std::endl;
	}
};
Cat foo()
{
	Cat c("yaong", 3);
	return c;
}
int main()
{
	Cat c1("nabi", 2);
	
	Cat c2 = c1;	// lvalue, copy
	Cat c3 = foo();	// rvalue, move

	Cat c4 = static_cast<Cat&&>(c2);	// 
	
	Cat c5 = std::move(c3); // 이 함수가 위처럼 캐스팅을 하고 있습니다.

	// 핵심
	// 1. std::move()가 자원을 이동하는 일을 하는 것이 아닙니다.
	// 2. 단지, 인자로 받은 객체를 rvalue 로 캐스팅 하는 일만 하게됩니다.
	// 3. 캐스팅의 결과로 복사 생성자가 아닌 이동생성자가 호출되고
	// 4. 이동 생성자에서 자원의 이동이 발생

	std::string s1 = "hello";
	std::string s2 = std::move(s1);
}




