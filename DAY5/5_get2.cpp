#include <iostream>

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
//	tuple<> t0;  					// 3번째 부모
//	tuple<             short> t1; 	// 2번째 부모
//	tuple<     double, short> t2; 	// 1번째 부모
//	tuple<int, double, short> t3; 	// 자신

	tuple<int, double, short> t(1, 3.4, 2);

	std::cout << t.value << std::endl; // 1
	
	std::cout << static_cast<tuple<double, short>&>(t).value << std::endl; // 3.4
	
	std::cout << static_cast<tuple<short>&>(t).value << std::endl; // 2
}
