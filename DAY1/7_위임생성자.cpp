#include <iostream>

// 생성자에서 다른 생성자 호출시 주의해야 하는점
// => 상속 사용시, 기반 클래스 생성자가 2번 호출되는 문제를 해결해야 합니다.

// 6_위임생성자 - 24page
class Point // : public Base
{
public:
	int x, y;
public:
	Point()  // : Base() 처럼 컴파일러가 기반 클래스 생성자 호출 코드 추가
	{
		// 생성자에서 다른 생성자 호출 ??
		// => 안됩니다.
		Point(0, 0);	// 이코드는 다른 생성자를 호출하는 코드가 아니라
						// 임시객체를 만드는 표기법
						// 그래서, 에러는 아닙니다 - 내일 임시객체 배울때 자세히
	}
	Point(int a, int b) : x(a), y(b)   // : Base()
	{
		// 복잡한 초기화 코드
	}
};
int main()
{
	Point p;
	std::cout << p.x << std::endl;

}

