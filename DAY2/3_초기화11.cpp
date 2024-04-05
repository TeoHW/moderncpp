// 1_초기화11 - 65 page..
// aggregate initialization
#include <iostream>

struct Point
{
	int x, y;

	// Point()             : x(0), y(0) {}	// 1
	// Point(int a, int b) : x(a), y(b) {}	// 2

	// void foo(){} // 이 멤버가 aggregate type입니다. 
	// virtual void foo(){} // 이 멤버는 aggregate type이 안됩니다. 가상함수 포인터가 초기화 되어야 하기 때문

	// Point (){} /// 사용자가 만든 생성자가 있어도 aggregate 아닙니다.

	// Point () = default; // c++17까지는 aggregate type, 그러나 20부터는 아님
};

int main()
{
	Point p1;	
	// Point p2(1, 2);
	Point p3{1,2}; // 생성자가 없어도 {}로 초기화 가능
	Point p4 = {1,2}; // 생성자가 없어도 {}로 초기화 가능
}
