#include <iostream>

// C 언어의 가변인자 함수 : ... 사용
// => 함수 사용하는 코드를 컴파일 할때, 인자에 대한 검증을 하지 말라는 것.
// => 핵심은 사용자가 보낸 인자를 함수 안에서 꺼낼수 있어야 합니다.
// 규칙 1. 1번째 인자는 반드시 이름이 있어야 합니다.
int sum( int n, ... )
{
	int* p = &n;

	std::cout << *(p+2) << std::endl;
	std::cout << *(p+4) << std::endl;

	return 0;
}

int main()
{
	int ret = sum( 1,2,3,4,5);
	
	std::cout << ret << std::endl;
}