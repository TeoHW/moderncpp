#include <iostream>


// 메모리 공간에서 Point 객체 2개를 만들면, 멤버변수 메모리 공간은 각각 생성 
// 함수는 1개만 생성
// 함수가 1개일 때 set 함수 안에서 x, y가 각 객체의 것인지 어떻게 알 수 있나?
// 컴파일러에 의해 set호출 시 (set(&p1, 1, 2)와 같은 형태로 객체 참조가 추가된다.)
// 각 객체가 자동으로 참조되어 호출되는 것을 this call이라고 부른다.
class Point
{
	int x, y;
public:
	void set(int a, int b)	// void set(Point* this, int a, int b) { this->x = a, this->y = b;}
	{
		x = a;
		y = b;
	}	
	// 핵심 1. 멤버 함수는 호출시 객체가 같이 전달됩니다. - this call
	// 2. static 멤버 함수는 객체가 전달되지 않습니다. 
	static void foo(int n){}
};

int main()
{
	Point p1;
	Point p2;

	Point::foo(10); // 객체가 없어도 static 함수는 직접 호출 가능하다.
	p1.foo(10);	// 객체를 가지고 호출해도 객체가 전달되지 않는다. 

	p1.set(1, 2);
	p2.set(3, 4);
	
}