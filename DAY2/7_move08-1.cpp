#include <iostream>
#include <string>

// 규칙 2. 사용자가 "복사 생성자만 만든 경우"
// => 컴파일러는 디폴트 이동생성자를 제공 하지 않는다.
// => std::move() 사용시 에러가 아니라
//    사용자가 만든 복사 생성자 사용

// 이때, 컴파일러에서 이동생성자의 디폴트 버전을 요청하려면
// "= default" 로 요청하면 된다.

struct Object
{
	std::string name;
	Object(const std::string& n) : name(n) {} 

	Object(const Object& other) : name(other.name)
	{
		std::cout << "copy\n";
	}

	Object(Object&&) = default;
};

int main()
{
	Object o1("obj1");
	Object o2("obj2");

	Object o3 = o1;  // 사용자가 만든 복사 생성자 사용.
	Object o4 = std::move(o2);// 사용자가 만든 복사 생성자 사용.
								// 단, =default 요청시는 생성된 move생성자 사용

	std::cout << o1.name << std::endl;
	std::cout << o2.name << std::endl;
}
