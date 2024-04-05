// 13_default_function - 41 page
#include <type_traits>
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int a, int b) {}

	// 아무일도 하지 않은 디폴트 생성자가 필요 하다면
	// 방법 1. 직접 만들기
//	Point() {} // bad

	// 방법 2. 컴파일러에게 요청하기 
	Point() = default; // good
};

int main()
{
	Point p1;
	Point p2(1, 2);
}




