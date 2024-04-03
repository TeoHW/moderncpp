#include <iostream>

class Point
{
public:
	int xpos, ypos;

	Point(int x, int y) : xpos{x}, ypos{y} {}

	void set(int x, int y);

	// 상수 멤버 함수
	// 1. 멤버 함수 안에서 멤버 데이타를 수정할수 없고
	// 2. 상수 객체라도 상수 멤버 함수는 호출 가능하다.
	// => 선언과 구현에 모두 표기 해야 한다.
	void print() const;
};

void Point::set(int x, int y) 
{
	xpos = x;
	ypos = y;
}
void Point::print() const
{
//	x = 100; // error. 상수 멤버 함수에서는 멤버 값 수정안됨.
	std::cout << xpos << ", " << ypos << std::endl;
}


int main()
{
//	Point pt{1, 2};
	const Point pt{1, 2}; // 객체가 상수 입니다.

	pt.xpos = 10;  	// error. public 에 있지만 상수객체 이므로 
	pt.set(10, 20); // error.
	pt.print();   	// error.   
					// 단, print 가 상수멤버 함수라면
					// 호출 가능.
}
// 핵심 : 상수 객체는 상수 멤버 함수만 호출가능하다.