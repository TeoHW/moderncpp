// 초기화 - 55 page
#include <iostream>

int x = 10;

class Test
{
	// C++11 부터 필드(멤버 데이타)에 직접 초기값을 넣을수 있습니다.
	int value1 = 0; // 권장
	int value2 = ++x; // 절대 사용하지 마세요.
public:	
	Test() {}
	Test(int n) : value2(n) {}
};
// 위코드를 컴파일러가 아래처럼 변경합니다.
/*
class Test
{
	int value1; // = 0;
	int value2; // = ++x;
public:	
	// 위 필드 초기값을 보고 생성자를 아래 처럼 변경합니다.
	Test()      : value1(0), value2(++x) {}
	Test(int n) : value1(0), value2(n) {}
};
*/
int main()
{
	Test t1;
	Test t2(5);

	std::cout << x << std::endl; // 예측해보세요. ?11
}
