int main()
{
	int n1 = 0;

	// auto : 우변의 표현식을 가지고
	//		  변수의 타입을 추론해 달라
	auto a1 = 3;		// int a1 = 3
	auto a2 = 3.4;		// double a2 = 3.4

	const int c = 0;
	auto a3 = c; // int a3 ? const int a3
				 // => 답은 int

	// decltype(exp) : exp 의 타입을 추론해 달라.
	decltype(n1) d;
}
