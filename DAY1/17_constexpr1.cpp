// 16_constexpr1
#include <array>

int main()
{
	int n = 10;
	const int c1 = 10; 
	const int c2 = n;  

	// 다음중 에러를 모두 고르세요
	std::array<int, 10> a1; // ok
	a1[0] = 10;

	std::array<int, n> a2;	// error
							// 템플릿 인자의 값은 반드시 컴파일할때
							// 알아야 합니다.
	//======================================
	// 핵심은 아래 2줄
	std::array<int, c1> a3; // ok
	std::array<int, c2> a4; // error

}


