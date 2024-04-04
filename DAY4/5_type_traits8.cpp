#include <iostream>
#include <vector>

class Object
{
public:
	Object() {}
	Object(const Object&)     {	std::cout << "copy" << std::endl; }
	Object(Object&&) noexcept {	std::cout << "move" << std::endl; }
};

// 템플릿 인자를 항상 잘 생각하세요
// T&  : 인자로 lvalue 만 받겠다는 의도
// T&& : 인자로 lvalue, rvalue 를 모두  받겠다는 의도

template<typename T>
T&& mymove( T&& obj)
{
	return static_cast<T&&>(obj);
}


int main()
{
	Object o1;
	Object o2 = o1;				// copy
	Object o3 = std::move(o2); 	// move
	Object o4 = mymove(o3); 	// move
	Object o5 = mymove( Object{} ); 	// move
}