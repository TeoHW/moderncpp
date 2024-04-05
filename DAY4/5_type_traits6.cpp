// 4_type_traits3 - 210 page
#include <iostream>

// 1. type traits 를 사용하기 위한 헤더
#include <type_traits>

// C++14 부터 별명을 만들었습니다.
template<typename T>
using remove_pointer_t = std::remove_pointer<int*>::type;

int main()
{
	// 2. 조사하려면
//	bool b1 = std::is_pointer<int*>::value;
	bool b1 = std::is_pointer_v<int*>;

	// 3. 변형 타입을 얻으려면
//	std::remove_pointer<int*>::type n1;
	std::remove_pointer_t<int*> n1;
}