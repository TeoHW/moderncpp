#include <iostream>
#include <string>

// 자동 생성 규칙.
// 아래 클래스(Object) 에는 "직접 동적할당한 메모리" 는 없습니다
// => 하지만 std::string 인 name 이 메모리 할당하게 됩니다.
// => 복습 하실때는 "Object o1("obj1")" 의 메모리 그림을 꼭 그리세요

// 아래 클래스는 사용자가 "복사 생성자" 와 "이동생성자"를 모두 만들지 않았습니다.
// => 컴파일러가 "복사생성자와 이동생성자를 모두 제공합니다."

// 컴파일러 제공 복사 생성자에서는 : 모든 멤버를 복사 member = other.member
// 컴파일러 제공 이동 생성자에서는 : 모든 멤버를 이동 member = std::move(other.member)

// 아래 코드는 복사와 이동을 완벽히 지원하는 잘 만든 클래스.

struct Object
{
	std::string name;

	Object(const std::string& n) : name(n) {} // 일반 생성자- 복사생성자아님
};

int main()
{
	Object o1("obj1");
	Object o2("obj2");

	Object o3 = o1;
	Object o4 = std::move(o2);

	std::cout << o1.name << std::endl;
	std::cout << o2.name << std::endl;
}
