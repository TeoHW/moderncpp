#include <functional>
#include <vector>
#include <iostream>

int main()
{
	std::function<void()> f;

	{
		int n = 0;

	//	f = [n](){ std::cout << "lambda\n";}; // n의 복사본이 보관되므로
											  // 항상 안전합니다.

		f = [&n](){ std::cout << "lambda\n";}; // n의 참조(주소)가보관
								// n이 파괴되지 않는다는 보장이 있어야 합니다. 
	}

	f();
}
