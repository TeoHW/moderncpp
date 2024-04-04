#include <iostream>

class Point
{
	int x, y;
public:
	void set(int a, int b) // void set(Point* this, int a, int b)
	{
		x = a;				// this->x = a;
		y = b;				// this->y = b;

		// 
	}	
	// 핵심 1. 멤버 함수는 호출시 객체가 같이 전달 됩니다. - thiscall
	// 2. static 멤버 함수는 객체가 전달되지 않습니다.
	static void foo(int n) {}
};

int main()
{
	Point p1;
	Point p2;

	Point::foo(10); // 컴파일되도 foo(10)
	p1.foo(10);		// 객체가 있어도 foo(10)

	p1.set(1, 2); // set(&p1, 1, 2)
	p2.set(3, 4); // set(&p2, 3, 4)

}