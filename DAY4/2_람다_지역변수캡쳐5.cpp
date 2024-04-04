#include <string>
#include <iostream>

// 149
int main()
{
	int v1 = 0, v2 = 0;

	auto f1 = [v1, &v2](int a) {  };
	auto f2 = [&v1, v2](int a) {  };

	auto f3 = [=](int a) {  }; // 모든 지역변수를 값으로 캡쳐
	auto f4 = [&](int a) {  }; // 모든 지역변수를 참조로 캡쳐

	auto f5 = [=, &v2](int a) {  }; // v2만 참조, 나머지는 값
	auto f6 = [&,  v2](int a) {  };
	auto f7 = [&, &v2](int a) {  }; // 경고(또는 에러), 이렇게 만들필요는 없다.

	auto f8 = [x = v1, &y = v2](int a) { y = 100; return x + y + a; };
			// v1을 값 캡쳐하는데 이름은 x 이름으로
			// v2는 참조 캡쳐 이름은 y,   y = 100 으로 하면 v2 는 100

	std::string s = "hello";
//	auto f9 = [s]() {};  // "멤버 s = 지역변수 s" 으로 복사본 만들어 사용

	auto f9 = [msg = std::move(s) ]() { auto a = msg; };
			// 멤버 msg = std::move(s)
			
	std::cout << s << std::endl; // ""

}




