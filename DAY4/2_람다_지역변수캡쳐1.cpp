// 6_람다_지역변수캡쳐1 - 146
#include <iostream>

int g = 10;

int main()
{
	int v1 = 10, v2 = 10;

	// 1. 람다표현식에서 전역변수 접근 가능
	auto f1 = [](int a) { return a + g; };

	// 2. 지역변수 접근 - 그냥하면 에러 발생
	auto f2 = [](int a) { return a + v1 + v2; };

	// 2. 지역변수 접근 - 캡처를 해야 함 [] 안에 넣기
	auto f3 = [v1, v2](int a) { return a + v1 + v2; };

	// 3. 캡처 후 변경 - 에러
	auto f4 = [v1, v2](int a) { v1 = a; v2 = a; };

	// 4. 캡처 후 변경하기 위해서는 mutable lambda를 사용
	auto f4 = [v1, v2](int a) mutable { v1 = a; v2 = a; };

}





