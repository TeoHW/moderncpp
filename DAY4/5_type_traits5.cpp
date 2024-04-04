#include <iostream>
#include <type_traits>

// C++ 표준의 remove_pointer 는 한개의 포인터만제거 합니다.
// 아래 처럼 모두 제거하는 것 만들어 보세요

int main()
{
	remove_all_pointer<int***>::type n;
}
