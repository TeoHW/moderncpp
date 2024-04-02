#include <iostream>
#include <string>

// 규칙 3. 사용자가 "이동 생성자만 만든 경우"
// => 컴파일러는 디폴트 복사생성자를 제공 하지 않는다.
// => 복사가 필요한 코드가 있다면 에러 발생
// => 복사가 필요할때 이동을 사용할수는 없다.

// 이때, 컴파일러에서 복사생성자의 디폴트 버전을 요청하려면
// "= default" 로 요청하면 된다.

struct Object
{
	std::string name;
	Object(const std::string& n) : name(n) {} 

	Object(Object&& other) : name(std::move(other.name)  
	{
		std::cout << "move\n";
	}
};

int main()
{
	Object o1("obj1");
	Object o2("obj2");

	Object o3 = o1;  		  // 에러. 복사생성자가 없다.
	Object o4 = std::move(o2);// 사용자가 만든 이동 생성자 사용.

	std::cout << o1.name << std::endl;
	std::cout << o2.name << std::endl;
}
