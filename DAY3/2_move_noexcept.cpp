#include <iostream>
#include <vector>

class Object
{
public:
	Object() {}
	Object(const Object&) {	std::cout << "copy" << std::endl; }

	// move 생성자를 직접 만들게 된다면
	// 1. 되도록 예외가 발생하지 않게 만드세요 
	// => 예외 나오는 코드를 작성할 이유는 거의 없습니다.

	// 2. 그리고, 예외가 없음을 알리기 위해서 noexcept 를 붙이세요
	Object(Object&&)  noexcept  { std::cout << "move" << std::endl; }
};

int main()
{
	Object o1;
	Object o2 = o1; 			// 항상 copy
	Object o3 = std::move(o1); 	// 항상 move
	Object o4 = std::move_no_except(o2); // move 생성자에 예외가 없을때만 move
										 // 예외 가능성이 있으면 copy

	std::vector<Object> v(5);
	std::cout << "----------------" << std::endl;

	v.resize(10); // 이순간의 원리를 생각해봅시다.

	std::cout << "----------------" << std::endl;
}

