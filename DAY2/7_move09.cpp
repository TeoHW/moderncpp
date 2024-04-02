// std::move()소개
#include <iostream>
#include <cstring>

// 클래스 내부에서 개발자가 직접 자원을 할당하면
// => char* name = new char[10];  
// => 반드시, 소멸자, 복사 생성자 만들어야 합니다.
// => 이동을 지원하려면 이동생성자도 만들어야 합니다.

// 그런데, 문자열이 필요할때 "std::string" 을 사용하면. 
// => 개발자가 "복사생성자", "이동생성자"를 만들필요 없습니다.
// => 하지만 컴파일러가 모두 지원합니다.
// => 최선의 코드 입니다.

class Cat
{
	std::string name;
	int   age;
public:
	Cat(const std::string& n, int a) : name{n}, age{a}
	{
	}

};
Cat foo()
{
	Cat c("yaong", 3);
	return c;
}
int main()
{
	Cat c1("nabi", 2);
	
	Cat c2 = c1;	// lvalue, copy
	Cat c3 = foo();	// rvalue, move

	Cat c4 = static_cast<Cat&&>(c2);	// 
	
	Cat c5 = std::move(c3); // 이 함수가 위처럼 캐스팅을 하고 있습니다.


}





