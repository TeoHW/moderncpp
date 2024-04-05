// 1_임시객체1 - 77 page
#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b)	{ std::cout << "Point()" << std::endl;	}
	~Point()            { std::cout << "~Point()" << std::endl;	}
};
int main()
{
	Point pt(1, 2); // 객체가 만들어짐, named object, {} 벗어나면 파괴
	Point(1, 2), std::cout << "x" << std::endl;	// 임시객체는 만들어지고 곧바로 파괴됨, 세미콜론 위치에서 소멸자
	//임시 객체를 만들때 가능하면 중괄호로
	Point{1, 2}, std::cout << "x" << std::endl;	// 임시객체는 만들어지고 곧바로 파괴됨, 세미콜론 위치에서 소멸자
	std::cout << "-------" << std::endl;
}





