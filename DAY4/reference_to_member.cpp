#include <iostream>

class AAA
{
	int data;
	int& r;
public:	
	AAA() : data(0), r(data) {}

	void foo() const 
	{
//		data = 10; // error
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

/*
	// 위코드는 아래와 유사한 현상
	const int c = 10;

//	int* p = &c; // error
	int* p = (int*)&c; // ok

	*p2 = 20;

	std::cout << c; // ????? undefined
	*/
}