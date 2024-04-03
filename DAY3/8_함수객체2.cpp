#include <iostream>
#include <bitset>


// 0 ~ 9 사이의 "중복되지" 않은 난수를 반환하는 함수를 만들려면 ???
// => 일반 함수는 동작이 있지만 상태가 없습니다.
// => 함수 실행중 발생된 데이타를 저장할 공간이 없습니다.
// => static 지역변수 또는 전역변수가 최선인데,,, 한계가 있습니다.
int urand()
{
	return rand() % 10;
}

int main()
{
	for ( int i = 0; i < 10; i++ )
		std::cout << urand() << ", ";
	
}