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
	virtual void foo()      override final {}	// 더이상 override 안됨 - final 키워드 
	virtual void goo(int a) override {}
	virtual void hoo()      override {}
};


class Derived2 : public Derived
{
public:
	// virtual void foo()      override final {}	// 더이상 override 안됨 - final 키워드 
	virtual void goo(int a) override {}
	virtual void hoo()      override {}
};

int main()
{
}
