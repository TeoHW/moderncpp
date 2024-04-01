// 20_타입추론5

template<typename T> void foo(T a) {}

int main()
{
	// 템플릿은 호출시 전달한 인자로 타입 추론
	foo(10);
	// T a = 10; // 결국 템플릿 타입 추론은 이 코드에서 추론하는것
	auto a = 10; // auto 와 동일한 모양

	int  n = 10;
	int& r = n;
	const int c = 10;
	const int& cr = c;

	// auto 추론은 템플릿 추론과 동일합니다.
	// 아래 각 변수의 타입을 생각해 보세요
	// T a1 = n; 이므로 인자가 값타입일때, 즉, 규칙 1
	// 규칙 1. 함수 인자(우변)에서 const, volatile, reference 제거후 타입결정
	auto a1 = n;  // a1 : int
	auto a2 = r;  // a2 : int
	auto a3 = c;  // a3 : int
	auto a4 = cr; // a4 : int

	// T& a = n; 이므로 규칙 2. 
	// 규칙 2. 함수 인자(우변)에서 reference 만제거 auto결정
	auto& a5 = n;  // auto : int   a5 : int&
	auto& a6 = r;  // auto : int   a6 : int&
	auto& a7 = c;  // auto : const int  a7 : const int&
	auto& a8 = cr; // auto : const int  a8 : const int&
}


