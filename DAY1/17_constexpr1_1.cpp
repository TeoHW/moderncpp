// 16_constexpr1
#include <array>

int main()
{
	int n = 10;
	const int c1 = 10; 
	const int c2 = n;  

	// 다음중 에러를 모두 고르세요
	std::array<int, 10> a1;
	// std::array<int, n> a1; // 에러
	std::array<int, c1> a1;
	// std::array<int, c2> a1; // 에러
	// 중요한 것은 컴파일 시 값을 알아야 한다는 것

	// 상수의 의미는 1. 변경할 수 없다 와 2. 컴파일 시 값이 지정되어 있다는 의미가 혼재됨
	// C#에서는 readony / const로 구분하고 있고 C++은 const / constexpr로 구분한다
		

}
