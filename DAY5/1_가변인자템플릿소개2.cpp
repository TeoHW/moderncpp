#include <iostream>

// C 언어의 가변인자 함수 : ... 사용
// 함수 사용하는 코드를 컴파일 할 때, 인자에 대한 검증을 하지 말라는 것.
// 핵심은 사용자가 보낸 인자를 함수 안에서 꺼낼 수 있어야 합니다
// 규칙 1. 첫번째 인자는 반드시 이름이 있어야 합니다.
// 첫번째 인자의 메모리에서 연속되어 저장되어 있기 때문에 그것을 이용해서 값을 꺼냅니다. 

int sum( int n, ... )
{
	int* p = &n;
	for(int i = 0; i < 10; i+=2){
		std::cout << *(p+i) << std::endl;
	}
	return 0;
}

int main()
{
	int ret = sum( 1,2,3,4,5);
	
	std::cout << ret << std::endl;
}