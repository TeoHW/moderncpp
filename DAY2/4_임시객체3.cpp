#include <iostream>

// 임시객체와 함수 인자 - 81 page

class Point
{
public:
	int x, y;

	Point(int a, int b) { std::cout << "Point()" << std::endl; }
	~Point() { std::cout << "~Point()" << std::endl; }
};

void draw_line(const Point& from, const Point& to) {}
void init(Point& pt) { pt.x = 0; pt.y = 0; }

int main()
{
	// (1,2) ~ (7,8) 에 선을 그리고 싶다.
	draw_line({1,2}, {7,8}); // 직접 전달해야 편하다
	// 방법 1. 인자로 named object 사용
	Point p1{1, 2};
	Point p2{7, 8};
	draw_line(p1, p2); // p1, p2는 {} 끝날때까지 메모리 낭비
	
	// 하지만 아래 코드는 에러
	// init(Point& pt)는 pt를 변경할 수 있는 참조형이다
	// 임시 객체는 변경하는 것이 의미 없기 때문에 임시 객체는 참조형으로 전달 불가하다
	init(Point{1,2}); 

}





