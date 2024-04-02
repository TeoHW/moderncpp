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

	// 임시객체 전용 복사 생성자 ( 이동생성자 라고 합니다.)
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

	Cat c2 = c1; // c1은 lvalue "복사 생성자"
				 // 자원의 깊은 복사
	std::cout << "----------\n";
	Cat c3 = foo(); // 임시객체 이므로 rvalue, "이동 생성자"
					// 자원을 이동(포인터 복사후, 임시객체 포인터는 reset)
	std::cout << "----------\n";
	
}

// 나중에 이부분을 학습할때
// "copy ellision" 이라는 최적화 기술때문에 결과가 예상과 다를때가 많습니다.
// => 위 최적화를 하지 말라고 옵션을 주면 됩니다.
// g++ 7_move04.cpp -std=c++14 -fno-elide-constructors