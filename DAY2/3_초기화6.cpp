// 1_초기화6 - 60 page
#include <iostream>

struct Point
{
	int x;
	int y;
};

int main()
{
	int n1{ 0 };		// direct initialization 
	int n2 = { 0 }; 	// copy initialization
	int n3;				// default initlization - 쓰레기값
	int n4{};			// value initialization - int 인 경우 0으로 초기화
						//					사용자 타입이면 디폴트 생성자호출

	std::cout << n4 << std::endl; // 0

	Point pt{};  // 모든 멤버를 0으로 초기화
	std::cout << pt.x << std::endl;

	int arr[10]{};

	std::cout << arr[0] << std::endl;
}


