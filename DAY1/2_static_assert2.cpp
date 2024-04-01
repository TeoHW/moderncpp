#include <iostream>
#include <type_traits> 
#include <cstring>

#pragma pack(1)	// 구조체 멤버 정렬을 1byte align 사용
struct PACKET
{
	char cmd;
	int  data;
};

static_assert( sizeof(PACKET) == sizeof(int) + sizeof(char), 
				"error, unexpected padding");

/*
int main()
{
	std::cout << sizeof(PACKET) << std::endl; // 5
}
*/


template<typename T> void object_set_zero(T* p)
{
	// std::is_polymorphic_v<T> : T가 가상함수가 있으면 true

	static_assert( ! std::is_polymorphic_v<T>, 
					"error, T has virtual function" );

	memset(p, 0, sizeof(T)); 
}
class AAA
{
	int data;

	virtual void foo() {}
};

int main()
{
	AAA aaa;
	object_set_zero(&aaa);
}



