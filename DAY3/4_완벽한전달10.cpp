#include "chronometry.h"
#include <thread>
using namespace std::literals;

void f1()  
{
	std::this_thread::sleep_for(3s);
}
void f2(int a, double d)  
{
	std::this_thread::sleep_for(2s);
}

int main()
{
	chronometry(f1);
	// f2(1, 3.4) 의 수행시간을 출력해 보세요
}