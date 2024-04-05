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
	tuple<int, double, short> t(1, 3.4, 2);

	std::cout << ? << std::endl; // 1
	std::cout << ? << std::endl; // 3.4
	std::cout << ? << std::endl; // 2
}
