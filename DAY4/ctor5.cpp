#include <iostream>

class Base
{
public:
	Base()     { vfunc(); } // Base::foo
							// 이 코드가 Derived foo 를 호출했다면 화면 출력결과 예측해보세요
							// => Derived::vfunc 에서 사용하는 data 는 초기화되기 전입니다.!!
							// => 이런 문제 때문에
							// "생성자에서는 가상함수가 동작하지 않는다" 라는 문법이 있습니다.

	void foo() { vfunc(); } // Derived::foo
	virtual void vfunc() { std::cout << "Base vfunc" << std::endl; }
};

class Derived : public Base
{
	int data{10};
public:
	virtual void vfunc() override
	{ 
		std::cout << "Derived vfunc : " << data << std::endl; 
	}
};
int main()
{
	Derived d;
//	d.foo();
}