#include <iostream>

int main()
{
	int n = 0;

	// 아래 2줄의 기계어 코드는 완전히 동일합니다
	int* p = &n;
	int& r = n;

	// 아래 2줄도 기계어 코드는 완전히 동일합니다
	*p = 10;
	r = 10;
}