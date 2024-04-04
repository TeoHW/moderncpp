void foo(auto n) {} 

int main()
{
	// generic lambda
	// => 인자로 auto 를 사용하는 람다
	// => C++14 부터 지원.
	// => 아래 람다에서 1, 2번째 인자타입은 달라도 됩니다.
//	auto f = [](int a, int b) { return a + b; };
	auto f = [](auto a, auto b) { return a + b; };

	int    n = f(1, 2);
	double d1 = f(3.2, 3.2);
	double d2 = f(3.2, 2);
}

// generic 람다의 원리
class CompilerGeneratedName
{
public:
	template<typename T1, typename T2>
	inline auto operator()(T1 a, T2 b) const 
	{
		return a + b;
	}
};