#include <iostream>

// 임시객체와 함수 인자 - 81 page

class Point
{
public:
	int x, y;

	Point(int a, int b) { std::cout << "Point()" << std::endl; }
	~Point() { std::cout << "~Point()" << std::endl; }
};

void set_pixel(int x, int y) {}

int main()
{
	// 1, 2 에 점을 그리고 싶다.
	// #1. 함수 인자에 2개의 변수 전달
	int x = 1;
	int y = 2;
	set_pixel(x, y);
	
	// #2. 인자를 literal 형태로 전달
	set_pixel(1, 2);	
	
}





