// 3_레퍼런스1.cpp - 89 page - 아주 중요!

struct Point
{
	int x, y;

	Point(int a, int b) : x(a), y(b) {}
};
int main()
{
	Point pt{0, 0};

	// 규칙 1. non-const reference는 lvalue만 가리킬 수 있다.
	Point& r1 = pt;				// ok
	Point& r2 = Point{0, 0};	// error

	// 규칙 2. const reference는 모두 가리킬 수 있다. 
	const Point& r3 = pt;
	const Point& r4 = Point{0, 0};

	// 규칙 3. c++ 11 만들 때 rvalue(임시객체)를 상수성 없이 받을 필요가 생김
	// move와 완벽한 전달을 위해!
	// => rvalue reference는 rvalue만 가리킬 수 있다. 
	Point&& r5 = pt;		// error
	Point&& r6 = Point{0,0};// ok

	// &  : lvalue reference
	// && : rvalue rederence
	

}
