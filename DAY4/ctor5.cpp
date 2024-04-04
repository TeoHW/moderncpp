#include <iostream>

class Base
{
public:
	Base()     { vfunc(); } // Base::foo
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