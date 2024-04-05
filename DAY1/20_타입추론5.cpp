// 20_타입추론5

template<typename T> void foo(T a) {
	std::cout << "foo" << __PRETTY_FUNCTION__ << std::endl;
}

int main()
{
	// 템플릿은 호출시 전달한 인자로 타입 추론
	foo(10);
	auto a = 10;

	int  n = 10;
	int& r = n;
	const int c = 10;
	const int& cr = c;

	// auto 추론은 템플릿 추론과 동일합니다.
	// 아래 각 변수의 타입을 생각해 보세요
	auto a1 = n;  // a1 : int
	auto a2 = r;  // a2 : int
	auto a3 = c;  // a3 : int
	auto a4 = cr; // a4 : int

	auto& a5 = n;  // auto : int	a5 : int&
	auto& a6 = r;  // auto : int	a6 : int&
	auto& a7 = c;  // auto : const int a7 : const int&
	auto& a8 = cr; // auto : const int a8 : const int&
}


