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
		strcpy_s(name, strlen(n)+1, n);
	}
	~Cat() { delete[] name; }


	Cat(const Cat& other) : age{other.age}
	{
		name = new char[strlen(other.name) + 1];
		strcpy_s(name, strlen(other.name)+1, other.name);

		std::cout << "copy" << std::endl;
	}
	// const Cat&  : lvalue, rvalue 모두 받을수 있다.
	// Cat&&       : rvalue 만 받을수 있다.
	// => 둘다 있을때는 rvalue 가 전달되면 "Cat&&" 가 우선 호출..

	// 임시객체 전용 복사 생성자
	Cat(Cat&& other) : age{other.age}
	{
		name = other.name;
		other.name = nullptr;
		std::cout << "move" << std::endl;	
	}	
};

Cat foo()
{
	Cat c{"yaong", 2};
	return c;
}
int main()
{
	Cat c1{"nabi", 3};
	Cat c2 = c1;

	Cat c3 = foo(); // 이 한줄을 잘 생각해 보세요
					// 문제점을 찾으세요(성능이슈)
	
}
