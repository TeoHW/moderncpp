// 7_람다기타1 - 150
class Test
{
	int data = 0;
public:
	void foo()
	{
		// 멤버 데이타 캡쳐 ?
		auto f = [](int a) { return a + data; };

	}
};

int main()
{
	Test t;

	// generic lambda
	// 인자로 auto를 사용하는 람다
	auto f = [](auto a, auto b) { return a + b; };

	int n = f(1,2);
	double d1 = (3.2, 3.4);
	double d2 = (2, 3.4);

	t.foo(); 
}

// generic 람다의 원리
class CompilerGeneratedName
{
public:
	template<typename T1, typename T2>
	inline auto operator()(T1 a, T2 b) const{
		return a+b;
	}
};
