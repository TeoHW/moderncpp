#include <iostream>

// 부모클래스에서 자식 클래스를 호출하는 방법
// crtp 기법 (Curiosly Recurring Template Pattern)
// 기반 클래스에서 파생 플래스 이름을 사용하는 기술
// 기반 클래스를 템플릿으로 만들고, 파생 클래스가 템플릿 인자로 전달하는 것
// 상당히 중요한 디자인 기법

template<typename T>
class Base
{
public:
	void fn()
	{
		// 여기서 파생 클래스 이름(Derived)을 사용할수 없을까 ?
		// Derived obj; // ?
		T obj;
	}
};

class Derived : public Base<Derived>
{

};

int main()
{
	Derived  d;
	d.fn();
}