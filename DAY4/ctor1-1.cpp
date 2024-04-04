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

/*
	// 개발자 코드		// 컴파일러가 변경한 코드
	Base()      		// Base() : bm()
	{ 
		std::cout << "Base()"    << std::endl; 
	}
*/
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
	// #1. 기반 클래스에 디폴트 생성자가 없으면 반드시 파생 클래스에서
	//     명시적으로 호출해야 합니다.
	// #2. 생성자 호출순서는 변경될수 없습니다.
	// => 항상 기반 클래스 먼저 호출하고, 멤버 데이타 생성자 호출
	
	Derived()  : dm(), Base(0)  	// Derived() : Base(), dm()
	{ 
		std::cout << "Derived()" << std::endl;	
	}

	Derived(int a) : dm(), Base( 0 ) // Derived(int ) : Base(), dm()
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