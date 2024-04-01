#include <array>

// constexpr 함수
// 1. 인자의 값을 컴파일 할때 알수 있고
//    함수호출이 constant expression 이 필요한 위치에 있다면
//    함수 실행을 컴파일 할때 해달라는 의미
// => 단, constexpr 함수 안에서 cout 사용, 메모리 할당, 파일 작업등을 하는
//    코드가 있으면 에러 입니다.
constexpr int Factorial(int n)
{
	return n == 1 ? 1 : n * Factorial(n - 1);
}

int main()
{
	int n = 5;

	std::array<int, Factorial(5) > a1; // ok. 함수실행을 컴파일 할때 수행
	std::array<int, Factorial(n) > a2; // error. 인자값을 컴파일 할때 알수없다.

	int ret = Factorial(n); // ok. runtime 에 실행.!
}
