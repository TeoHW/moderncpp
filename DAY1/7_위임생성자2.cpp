#include <iostream>


class Point 
{
public:
	int x, y;
public:
	// C++11 부터 생성자에서 다른 생성자 호출이 가능합니다.
	// => 초기화 리스트 문법으로 호출
	Point()  : Point(5, 5)
	{
//		Point(5,5); // <== 절대 이렇게 하지 마세요. 임시객체 생성하는 코드
	}
	Point(int a, int b) : x(a), y(b)   
	{
		// 복잡한 초기화 코드
	}
};
int main()
{
	Point p;
	std::cout << p.x << std::endl;

}

