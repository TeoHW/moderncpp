#include <iostream>

// 90 page reference overloading
void foo(int& a)       { std::cout << "int&" << a << std::endl; }
void foo(const int& a) { std::cout << "const int&" << a << std::endl; }
void foo(int&& a)      { std::cout << "int&& " << a << std::endl; }

int&& goo(int&& a) {
	a = 7;	
	return a;
}

int main()
{
	int n = 10;
	foo(n); 
	foo(10);

	int& r1 = n;
	foo(r1);


	int&& r2 = 10; 
	r2 = 1000;
	foo(r2);		// r2가 foo로 들어가면 int& 로 호출됨, r2s는 이름이 있고 계속 사용 가능한 lvalue
	foo(static_cast<int&&>(r2));	// lvaue인 r2를 rvalue로 캐스팅하는 코드
	// r2의 타입이 int&&인데, 다시 int&&로 캐스팅??
	// c++ 표준문서에 type이 &&라면 타입캐스팅이 아니라 value casting이다라고 나와있음


	
	std::cout << goo(100) << std::endl;
}

#include <iostream>

// 90 page reference overloading
void foo(int& a)       { std::cout << "int&" << std::endl; }		// 1
void foo(const int& a) { std::cout << "const int&" << std::endl; }	// 2
void foo(int&& a)      { std::cout << "int&&" << std::endl; }		// 3

int main()
{
	int&& r2 = 10; 	// 10 은 rvalue 이지만
					// r2는 이름이 있고, 계속 사용가능합니다.
	foo(r2);     	// => lvalue, 1번(int&) 호출

	foo(static_cast<int&&>(r2)); // lvalue 인 r2 를
								// rvalue 로 캐스팅하는 코드.
			// r2의 타입이 "int&&" 인데
			// 다시 "int&&" 로 캐스팅하는 거 아닌가요  ??
			// => 같은 타입 캐스팅 ???

			// C++ 표준 문서
			// static_cast<Type>(obj) 에서
			// => Type 이 "&&" 라면 타입캐스팅이 아니라 value casting 이다
			

}
/*
static_cast<int&&>(r2) // xvalue 캐스팅
static_cast<int>(r2)   // prvalue 캐스팅
// rvalue 의 종류 : xvalue, prvalue
*/










