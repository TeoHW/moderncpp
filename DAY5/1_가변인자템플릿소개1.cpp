#include <iostream>
#include <thread>

void f1() {}
void f2(int a, double d) {}

int main()
{
	std::thread t1(&f1);
	std::thread t2(&f2);
	// std::thread의 생성자는 어떤 타입을 몇개라도 인자로 받을 수 있습니다. 
	// 가변인자 템플릿 기술로 작성됨

	t1.join();
	t2.join();
}