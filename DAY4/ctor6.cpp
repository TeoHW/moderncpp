#include <iostream>

// isocpp.org 에서 상단 메뉴중에 "Core Guideline" 선택

class Base
{
public:
	Base()     {  } 
	virtual void vfunc() { std::cout << "Base vfunc" << std::endl; }
	virtual void init() { vfunc(); }
};

class Derived : public Base
{
	int data{10};
public:
	virtual void vfunc() override
	{ 
		std::cout << "Derived vfunc : " << data << std::endl; 
	}

	static Derived* Create()
	{
		Derived* p = new Derived; // 객체를 먼저 만들고
		p->init(); // 초기화를 위한 가상함수 호출. 여기서는 가상함수 동작
		return p;
	}

};


int main()
{
	// 일반적으로 객체는 아래 처럼 생성합니다.
	// => 생성자가 호출되고, 생성자에서 초기화 하게 됩니다.
	// => 그런데, 생성자에서는 가상함수 호출이 안됩니다
//	Derived* p1 = new Derived;

	// 해결책 : 객체를 생성하는 static 멤버 함수를 제공하세요(Factory)
	Derived* p2 = Derived::Create();
}