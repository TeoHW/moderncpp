// 14_override  - 44 page

class Base
{
public:
	virtual void foo() {}
	virtual void goo(int a) {}
	virtual void hoo() {}
};

class Derived : public Base
{
public:
	// 가상 함수 재정의시 실수(오타)
	// virtual void fooo() {}
	// virtual void goo(double a) {}
	// virtual void hoo() const  {}
    virtual void foo() 		override {}
	virtual void goo(int a) override {}
	virtual void hoo()  	override {}
};


int main()
{
	Derived a;

}
