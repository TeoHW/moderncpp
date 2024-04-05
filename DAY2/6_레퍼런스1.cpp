// lvalue, rvalue, reference 등을 알아야 하는 최종이유
// => move, 완벽한 전달, 람다 을 이해 하기 위해.

// 3_레퍼런스1.cpp - 89 page - 아주 중요!

struct Point
{
	int x, y;

	Point(int a, int b) : x(a), y(b) {}
};
int main()
{
	Point pt{0, 0};

	// 규칙 1. non-const lvalue reference 는 lvalue 만 가리킬수 있다.
	Point& r1 = pt;				// ok
	Point& r2 = Point{0, 0};	// error

	// 규칙 2. const lvalue reference 는 lvalue 와 rvalue 모두 가리킬수 있다.
	const Point& r3 = pt;			// ok
	const Point& r4 = Point{0, 0};	// ok

	// 규칙 3. C++11 만들때 rvalue(임시객체)를 상수성없이 받을 필요가
	// 생겼습니다. move 와 완벽한 전달을 위해!!
	// => rvalue reference 는 rvalue 만 가리킬수 있다.
	Point&& r3 = pt;			// error
	Point&& r4 = Point{0, 0};	// ok
}




// 위 규칙을 학습할때 아래 2개 함수를 생각하세요
void draw_line(const Point& from, const Point& to) {}
void init(Point& pt) { pt.x = 0; pt.y = 0; }
