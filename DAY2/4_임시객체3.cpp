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

	// 방법 1. 인자로 named object 사용
	Point p1{1, 2};
	Point p2{7, 8};
	draw_line(p1, p2); 

	// 방법 2. 임시객체로 전달
	draw_line(Point{1,2}, Point{7,8});  // ()로 해도 됩니다.

	//=======================
	Point pt;

	init( pt );  //  ok

	init( Point{1,2} ); // error. 
						// 함수 인자로 non-const reference 로 하는 의도
						// => 객체를 변경한다는 의도
						// => 임시객체를 변경하는 것은 논리적으로 맞지 않음
						// => 그래서 임시객체는 non-const reference로는
						//    가리킬수 없다.

}
// ARM( Annoted Reference Manual) : C++ 문법의 설계의도를 담은책
//									1990년대 서적





