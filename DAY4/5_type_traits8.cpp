#include <iostream>
#include <vector>
#include <type_traits>

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
std::remove_reference_t<T> && mymove( T&& obj)
{
	// mymove(o3) 이므로 인자로 lvalue전달 : T= Object&, T&& : Object& &&
	//							 static_cast<Object&>(obj) 이므로 lvalue캐스팅

	// 즉 아래 코드는 mymove 의 인자로 
	// rvalue 를 보내면 (받으면서 lvalue 된것을 ) 다시 rvalue
	// lvalue 를 보내면 (필요 없지만)            다시 lvalue 로
	// 즉, std::forward 의 구현입니다.
//	return static_cast<T&&>(obj);

	// std::move 는 무조건 rvalue casting 이 필요 합니다.
	return static_cast< std::remove_reference_t<T> &&>(obj);
}





int main()
{
	Object o1;
	Object o2 = o1;				// copy
	Object o3 = std::move(o2); 	// move
	Object o4 = mymove(o3); 	// move
	Object o5 = mymove( Object{} ); 	// move
}