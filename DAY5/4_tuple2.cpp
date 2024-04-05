// Step1. 가변인자 템플릿 사용

template<typename ... Ts>
struct tuple 
{

	static constexpr std::size_t N = 0; // 0개 보관	
};

int main()
{
	tuple<> t0;
	tuple<short> t1;
	tuple<double, short> t2;
	tuple<int, double, short> t3;
}
