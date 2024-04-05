// 초기화 - 55 page
#include <iostream>

int x = 10;

class Test
{
	// c++11 부터 필드(멤버 데이터)에 직접 초기값을 넣을 수 있습니다.
	int value1 = 0;
	int value2 = ++x;
public:	
	Test() {}
	Test(int n) : value2(n) {}
};

int main()
{
	Test t1;
	Test t2(5);

	std::cout << x << std::endl; // 예측해보세요. ?
}
