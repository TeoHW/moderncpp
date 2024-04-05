// 6_람다_지역변수캡쳐1 - 146
#include <iostream>

int g = 10;

int main()
{
	int v1 = 0, v2 = 0;

	// auto f2 = [v1, v2](int a) { v1 = a; v2 = a; };

	// 그러나 mutable은 캡쳐 변수를 class 멤버 데이터로 복사하는 것이기 때문에 진짜로 main의 지역변수를 바꾸는 것이 아니다 
	auto f2 = [v1, v2](int a) mutable { v1 = a; v2 = a; }; 

	f2(100);

	std::cout << v1 << ", " << v2 << std::endl;
	std::cout << sizeof(f2) << std::endl;

	// 람다 지역변수 캡쳐의 원리
	class CompilerGeneratedNamef2
	{
		// 캡처 변수
		int v1;
		int v2;
	public:
		CompilerGeneratedNamef2(int a, int b) : v1{a}, v2{b} {}

		// 일반적인 lambda는 const 키워드가 붙어 있어 캡쳐 변수를 변경할 수 없다
		inline auto operator()(int a) const { v1 = a; v2 = a; }; 

		// mutable 키워드를 붙인 mutable lambda는 아래 const 키워드를 제거함
		inline auto operator()(int a) { v1 = a; v2 = a; }; 
	};
	auto f2 = CompilerGeneratedNamef2{v1, v2};
}





