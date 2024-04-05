#include <iostream>
// 85 page

struct Base
{
	int value = 10; 
};
struct Derived : public Base
{
	int value = 20; // ok. 기반 클래스 멤버와 이름이 같아도 됩니다.
};
int main()
{
	Derived d;
	std::cout << d.value << std::endl;  // 20

	std::cout << static_cast<Base>(d).value << std::endl;  // 10
	std::cout << static_cast<Base&>(d).value << std::endl;  // 10

	static_cast<Base>(d).value = 20;   // error
	static_cast<Base&>(d).value = 20;  // ok
}

// 임시객체
// 1. 사용자가 의도적으로 만들기도 하고( draw_line( Point{1,1}, Point{2,2}))

// 2. 값을 반환하는 함수나, 값으로 캐스팅하는 코드에 의해서 생성되기도 한다.


