// 6_람다_지역변수캡쳐1 - 146
#include <iostream>

int main()
{
	int v1 = 0, v2 = 0;

	auto f2 = [v1, v2](int a) { v1 = a; v2 = a; }; 

	f2(100);

	std::cout << v1 << ", " << v2 << std::endl; // 0, 0

	//-------------------------------------
	class CompilerGeneratedName
	{
		int v1;
		int v2;
	public:
		CompilerGeneratedName(int a, int b) : v1{a}, v2{b} {}
		inline auto operator()(int a) const 
		
		{ 
			v1 = a; 
			v2 = a; 
		}
	};
	auto f3 = CompilerGeneratedName{v1, v2}; 
}





