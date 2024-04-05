#include <iostream>

class Point
{
public:
	// 상수가 아닌 멤버 함수의 this 는 Point* 
	// 상수멤버함수의         this  는 const Point*
	
	void set() {}			// void set(Point* this) {}
	void print() const      // void print(const Point* this)
	{
		x = 10;// error		// this->x = 10; 에서 this가 상수를 가르키는
							// 포인터 이므로 error!!
	}
};
int main()
{
	const Point pt;

	// 상수 객체는 상수 함수만 호출 가능합니다.
	pt.set();	// error	set(&pt) 인데, 
				// Point* this = &pt; 에서 pt 는 상수!!

	pt.print();	// ok
}