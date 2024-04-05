#include <iostream>
// 6_위임생성자 - 24page
class Point
{
public:
	int x, y;
public:
	Point() 
	{
		// 생성자에서 다른 생성자 호출 => 안됩니다.
		// Point(0, 0);
		// 생성자를 호출할 때 base class(상위)에 대한 생성자가 같이 호출되기 때문에, 중복된 생성자 호출이 발생한다. 

		Point(444, 22); // 이 코드는 다른 생성자를 호출하는 코드가 아니라 임시 객체를 만드는 표기법, 따라서 에러는 아님
		// 그렇지만 에러가 나지 않는다고 정상적인 방법이 아니기 때문에 값이 적용되지 않는다.
		
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

