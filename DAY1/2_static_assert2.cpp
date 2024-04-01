#include <iostream>
#include <type_traits> 
#pragma pack(1)	// 구조체 멤버 정렬을 1byte align 사용
struct PACKET
{
	char cmd;
	int  data;
};

static_assert( sizeof(PACKET) == sizeof(int) + sizeof(char), 
				"error, unexpected padding");


int main()
{
	std::cout << sizeof(PACKET) << std::endl; // 5
}



template<typename T> void object_set_zero(T* p)
{
	memset(p, 0, sizeof(T)); 
}
