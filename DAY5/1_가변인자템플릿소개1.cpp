#include <iostream>
#include <thread>

void f1() {}
void f2(int a, double d) {}

int main()
{
	std::thread t1(&f1); // f1을 스레드로 수행
	std::thread t2(&f2, 1, 3.4);
						// => std::thread 의 생성자는
						// => 어떤 타입을 몇개라도 인자로 받을수 있습니다
						// => 가변인자 템플릿 기술로 작성됨.

	t1.join();
	t2.join();
}