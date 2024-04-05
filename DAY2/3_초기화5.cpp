#include <vector>
#include <string>
#include <memory>

void goo(std::vector<int> v) {}
void hoo(std::string s) {}

int main()
{

	std::string s1("hello"); // ok
	std::string s2 = "hello";// ok

	hoo("hello"); // ok. std::string s = "hello"
	// string의 생성자는 explicit가 아니다.

	// 아래 코드중 에러를 찾아 보세요.
	std::vector<int> v1(10);  
	std::vector<int> v2 = 10; // 복사 생성자 허용 안됨 따라서 에러
	goo(10); // 복사 생성자 허용 안됨 따라서 에러

	


}





