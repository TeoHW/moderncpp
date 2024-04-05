#include <functional>
#include <vector>
#include <iostream>

void foo() { std::cout << "foo\n"; }

class Button
{
public:
	// C 함수 포인터 : 함수 및 람다도 등록되지만, 캡쳐한 람다는 안됨
//	void(*handler)() = nullptr;

	// C++ STL std::function : 호출 가능한 모든 것 등록 가능
	// std::function<함수타입>
	// void(*)() : 함수 포인터 타입
	// void   () : 함수 타입
	std::function<void()> handler;

	void click() 
	{
		if ( handler != nulllptr )
			handler(); // 등록된 함수 호출
	}
};

int main()
{
	Button btn;

	btn.handler = &foo;

	btn.click();
}
