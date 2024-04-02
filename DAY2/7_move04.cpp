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
