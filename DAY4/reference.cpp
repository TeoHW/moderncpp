#include <iostream>

int main()
{
	int n = 0;

	// 아래 2줄의 기계어 코드는 완전히 동일합니다
	int* p = &n;
	int& r = n;

	// 아래 2줄도 기계어 코드는 완전히 동일합니다
	*p = 10;	// 포인터는 * 연산자로 대상체에 접근
	r = 10;		// 레퍼런스는 * 필요 없습니다. 
	// *r = 10  // 레퍼런스를 "자동 dereferencing" 하는 포인터 라고 합니다.

	// 포인터 변수 크기
	// 32bit : 4바이트,  64bit : 8 바이트
	std::cout << sizeof(p) << std::endl; // 8
	std::cout << sizeof(r) << std::endl; // 8
}