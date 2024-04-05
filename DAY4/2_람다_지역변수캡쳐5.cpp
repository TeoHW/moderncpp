#include <string>
#include <iostream>

// 149
int main()
{
	int v1 = 0, v2 = 0;

	auto f1 = [v1, &v2](int a) {  };
	auto f2 = [&v1, v2](int a) {  };

	auto f3 = [=](int a) {  };  // 모든 지역 변수를 값 캡쳐하는 것 - 가능하면 쓰지 말 것
	auto f4 = [&](int a) {  };  // 모든 지역 변수를 참조 캡쳐하는 것

	auto f5 = [=, &v2](int a) {  }; // 모두 값 캡쳐 하는데 v2만 참조형 캡쳐
	auto f6 = [&,  v2](int a) {  }; // 모두 참조캡쳐 하는데 v2만 값 캡쳐
	// auto f7 = [&, &v2](int a) {  }; // 이런 경우는 없음

	// v1을 캡쳐하는데 x라는 이름으로 값 복사, v2를 y라는 이름으로 참조 캡쳐하여 사용
	auto f8 = [x = v1, &y = v2](int a) { return x + y + a; };

	// string을 복사해서 사용
	// std::string s = "hello";
	// auto f9 = [s]() {};

	// msg라는 이름으로 s를 move시켜 사용 - 이후 s는 빈통
	std::string s = "hello";
	auto f9 = [msg = std::move(s)]() { std::cout << msg << std::endl; };
	f9();
	std::cout << s << std::endl;

}




