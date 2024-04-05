#include <iostream>
// 85 page
struct Base
{
	int value = 10; // c++11 부터 이렇게 초기화가능
	// 구조체 안에서 초기화가 되네?

};
struct Derived : public Base
{
	int value = 20;
};
int main()
{
	Derived d;
	std::cout << d.value << std::endl; 
	std::cout << static_cast<Base&>(d).value << std::endl; // 개체 참조
	std::cout << static_cast<Base>(d).value << std::endl; // 복사본 생성


	static_cast<Base&>(d).value = 20;
	static_cast<Base>(d).value = 20; // 복사본이기 때문에 에러 발생

	// 임시객체
	// 1. 사용자가 의도적으로 만들기도 하고 ( draw_line(Point{1,2}, Point{3,4}))
	// 2. 값을 반환하는 함수나, 값으로 캐스팅하는 코드에 의해서 생성되기도 한다.

	

}

