// Step2. 한개 요소 보관하기

template<typename ... Ts>
struct tuple 
{
	static constexpr std::size_t N = 0;
};
// 사용자가 한개 이상의 타입을 전달하는 경우에 대한 부분 특수화
template<typename T, typename ... Ts>
struct tuple<T, Ts...>
{
	T value;

	tuple(const T& v) : value{v} {}
};

int main()
{
	tuple<> t0;
	tuple<short> t1;
	tuple<double, short> t2;
	tuple<int, double, short> t3;
}
