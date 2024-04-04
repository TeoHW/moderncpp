#include <iostream>
#include <vector>

class Object
{
public:
	Object() {}
	Object(const Object&)     {	std::cout << "copy" << std::endl; }
	Object(Object&&) noexcept {	std::cout << "move" << std::endl; }
};

// 아래 코드는 임시객체(rvalue)를 받을수 없는 잘못된 구현

template<typename T>
T&& mymove( T& obj)
{
	return static_cast<T&&>(obj);
}


int main()
{
	Object o1;
	Object o2 = o1;				// copy
	Object o3 = std::move(o2); 	// move
	Object o4 = mymove(o3); 	// move
	Object o5 = mymove( Object{} ); 	// error
}