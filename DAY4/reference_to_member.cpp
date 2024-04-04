#include <iostream>

class AAA
{
	int data;
	int& r;
public:	
	AAA() : data(0), r(data) {}

	void foo() const 
	{
		r = 20;
	}
	int get() const { return data;}
};
int main()
{
	AAA a;
	a.foo();

	const AAA ca;
	ca.foo();

	std::cout << ca.get() << std::endl;
}