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

}

