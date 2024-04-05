// 5_람다표현식1
#include <iostream>
#include <algorithm>
#include <functional>

int main()
{
	std::vector<int> v = { 1,3,5,7,9,2,4,6,8,10 };

	// 람다표현식의 원리(lambda expression)
	std::sort(v.begin(), v.end(), [](int a, int b) { return a < b; });
	// 이 람다식은 아래와 같이 변환된다
	//--------------------------------------------------------------
	class CompilerGeneratedName 
	{
	public:
		inline auto operator()(int a, int b) const 
		{ 
			return a < b; 
		}
	};
	std::sort(v.begin(), v.end(), CompilerGeneratedName{} );

}




