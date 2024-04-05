// Step 3. 모든 요소 보관하기

template<typename ... Ts>
struct tuple 
{
	static constexpr std::size_t N = 0;
};

template<typename T, typename ... Ts>
struct tuple<T, Ts...> : public tuple<Ts...>
{
	using base = tuple<Ts...>;

	T value;

	tuple() = default;
	tuple(const T& v, const Ts& ... args) : value{v}, base{args...} {}

	static constexpr std::size_t N = base::N + 1;
};


int main()
{
//	tuple<> t0;  // 보관 안함.
//	tuple<             short> t1; // short 보관
//	tuple<     double, short> t2; // double 보관
//	tuple<int, double, short> t3; // int 보관

	tuple<int, double, short> t(1, 3.4, 2);
}
