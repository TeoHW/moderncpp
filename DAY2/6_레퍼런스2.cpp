#include <iostream>

// 90 page reference overloading
void foo(int& a)       { std::cout << "int&" << std::endl; }		// 1
void foo(const int& a) { std::cout << "const int&" << std::endl; }	// 2
void foo(int&& a)      { std::cout << "int&&" << std::endl; }		// 3

int main()
{
	int n = 10;
	foo(n); 	// 1. int&  버전 선택 없다면 2. const int& 선택
	foo(10);	// 3. int&& 버전 선택 없다면 2. const int& 선택

	int& r1 = n;
	foo(r1);    // 1. int& 선택

	int&& r2 = 10; 
	foo(r2);    // 1. int& 선택!!

	// 데이타 타입과 value category 를 헷갈리지 마세요
	int n = 0;
	int& r1 = n;
	int&& r2 = 10;
	Point pt{1,2};
	// 				타입		value category
	// n			int			lvalue
	// 10			int			rvalue
	// pt			Point		lvalue
	// Point{1,1}	Point		rvalue
	// r1			int&		lvalue			
	// r2			int&&		lvalue
	//

//	Point&& r = Point{1,2};
}







