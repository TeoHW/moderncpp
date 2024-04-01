//8_nullptr3
#include <iostream>

int main()
{
	// literal 과 타입
	// => C/C++에서 모든 변수 와 값은 타입이 있습니다.
	3;		// int
	3.4;	// double
	"hello";// const char[6]
	false;	// bool

	nullptr;	// std::nullptr_t 라는 타입입니다.

	std::nullptr_t a = nullptr; 

	// 이제 a 는 nullptr 과 동일하게 사용가능합니다.
	// std::nullptr_t 타입은 모든 종류의 포인터로 암시적 형변환 가능합니다
	int* p1 = a;
	double* p2 = a;
}



