#include <vector>
#include <string>
#include <memory>

void goo(std::vector<int> v) {}
void hoo(std::string s) {}

int main()
{
	hoo("hello"); // ok. 되야 하고, 잘됩니다. std::string s = "hello" 
	std::string s1("hello"); 	// ok
	std::string s2 = "hello";	// ok
								// string(const char*) 는 explicit 아님.

	goo(10); // 안되야 하고, 그래서 에러 발생합니다.
	std::vector<int> v1(10);  // ok
	std::vector<int> v2 = 10; // error
							  // vector(std::size_t) 생성자는 explicit 라는 의미
	




}





