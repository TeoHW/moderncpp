#include <iostream>

class Point
{
public:
	int xpos, ypos;

	Point(int x, int y) : xpos{x}, ypos{y} {}

	void set(int x, int y);

	// 상수멤버함수
	// 1. 멤버함수안에서 멤버 데이터를 수정할 수 없고
	// 2. 상수 객체라도 상수 멤버 함수는 호출 가능하다. 
	// 선언과 구현에 모두 표기해야 한다. 
	void print() const; // const의 의미 : 이 함수안에서 멤버 값을 절대로 바꾸지 않을게
};

void Point::set(int x, int y) 
{
	xpos = x;
	ypos = y;
}

void Point::print() const
{
	std::cout << xpos << ", " << ypos << std::endl;
}


int main()
{
	// Point pt{1, 2};
	
	// 핵심 : 상수객체는 상수멤버함수만 호출 가능!!
	const Point pt{1,2};

	// pt.xpos = 10;   
	// pt.set(10, 20); 
	pt.print();     
}