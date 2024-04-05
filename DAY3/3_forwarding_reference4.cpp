struct Point
{
	int x, y;
	Point(int a, int b) : x(a), y(b) {}
};
// 방법 1. call by value
// 특징 : 복사본 생성됨.
// void foo( Point pt) {}

// 방법 2. call by const lvalue reference
// => 복사본 없이 lvalue 와 rvalue 를 모두 받을수 있다.
// => 단, 상수성이 추가된다!!
// void foo( const Point& pt) {}

// 상수성도 없이 그대로 받을수는 없을까 ?? => C++98 에서는 안됨.
// => "임시객체를 상수성 없이 받을 이유는 없었다"
// => move 가 없던 시절
//=====================================
// C++11 이후

// 방법 3. 2개의 foo
// => 복사본 없이, 상수성도 없이 
// => lvalue, rvalue 를 모두 받을수 있다
//void foo(Point& p)  {}
//void foo(Point&& p) {}

// 방법 4. T&& 를 사용하면 "방법3" 의 2개 함수를 자동생성할수 있다.
template<typename T> void foo(T&& p) {}


int main()
{
	Point pt(0, 0);

	// foo 함수에 lvalue 와 rvalue를 모두 보내고 싶다.
	foo( pt );
	foo( Point{0,0} );
}