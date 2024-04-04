// 6_람다_지역변수캡쳐1 - 146
#include <iostream>

int main()
{
	int v1 = 0, v2 = 0;

	// 아래 코드가 "capture by reference" 입니다.
	// [v1, v2]   : capture by value
	// [&v1, &v2] : capture by reference
	auto f2 = [&v1, &v2](int a) { v1 = a; v2 = a; }; 

	f2(100);

	std::cout << v1 << ", " << v2 << std::endl; // 100, 100

	//-------------------------------------
	class CompilerGeneratedName
	{
		int& v1;
		int& v2;
	public:
		CompilerGeneratedName(int& a, int& b) : v1{a}, v2{b} {}

		inline auto operator()(int a) const 
		{ 
			v1 = a; // v1 은 main 함수의 v1의 별명이므로
			v2 = a; // 이순간, 실제 main 함수의 v1, v2 변경됨
		}
	};
	auto f3 = CompilerGeneratedName{v1, v2}; 
}

class AAA 
{
	int data;
	int& r;
public:
	AAA(int& a) : r(a) {}

	void foo() const 
	{
		data = 10; // error. 상수 멤버함수에서 멤버 변경
		r = 20;    // ?
	}
};
int x = 0;
AAA aaa(x);



