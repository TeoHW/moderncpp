#include <iostream>
// 6_위임생성자 - 24page
class Point
{
public:
	int x, y;
public:
	//c++ 11 부터 생성자에서 다른 생성자 호출하는 방법
	Point() :Point(5,5)
	{

	}	
	Point(int a, int b) : x(a), y(b)
	{
		// 복잡한 초기화 코드
	}
};
int main()
{
	Point p;
	std::cout << p.x << std::endl;

}

