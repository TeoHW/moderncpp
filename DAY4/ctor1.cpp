#include <iostream>

struct BM // BaseMember
{
	BM()  { std::cout << "BM()" << std::endl;}
	~BM() { std::cout << "~BM()" << std::endl;}
};
struct DM // DerivedMember
{
	DM()     { std::cout << "DM()"    << std::endl;}
	DM(int)  { std::cout << "DM(int)" << std::endl;}
	~DM()    { std::cout << "~DM()"   << std::endl;}
};
struct Base
{
	BM bm;

	// 개발자 코드		// 컴파일러가 변경한 코드
	Base()      		// Base() : bm()
	{ 
		std::cout << "Base()"    << std::endl; 
	}

	Base(int a) 		// Base(int) : bm() 
	{ 
		std::cout << "Base(int)" << std::endl; 
	}
	~Base()     
	{ 
		std::cout << "~Base()"   << std::endl;
		
		// BM::~BM()
	}
};
struct Derived : public Base 
{
	DM dm;
	Derived()      	// Derived() : Base(), dm()
	{ 
		std::cout << "Derived()" << std::endl;	
	}

	Derived(int a) // Derived(int ) : Base(), dm()
	{ 
		std::cout << "Derived()" << std::endl;	
	}
	~Derived()     
	{ 
		std::cout << "~Derived()" << std::endl;

		// DM::~DM()
		// Base::~Base()
	}
};
int main()
{
	Derived d1; 	// call Derived::Derived()

//	Derived d2(7);
}