

int main()
{
	int n1 = 0;
    // auto : 우변의 표현식을 가지고 타입을 추론
	auto a1 = 3;
	auto a2 = 3.4;

	const int c = 9;
	auto a3 = c; // 이 때 a3은 int 로 추론됨

	// decltype(exp) : exp의 타입을 추론해달라
	decltype(n1) d;
}
