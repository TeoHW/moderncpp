// 1_초기화6 - 60 page
#include <iostream>

struct Point
{
	int x;
	int y;
};

int main()
{
	int n1{ 0 };	// 직접 초기화 direct
	int n2 = { 0 }; // 복사 초기화 copy
	int n3;			// 기본 초기화 default
	int n4{};		// value initialization - int default 값인 0으로 초기화 된다.
					// 사용자 타입이면 디폴트 생성자 호출
					// 구조체일때 파워풀해짐

	std::cout << n4 << std::endl; // 0

	Point pt{};  // 모든 멤버가 0으로 초기화됨
	std::cout << pt.x << std::endl;
}


