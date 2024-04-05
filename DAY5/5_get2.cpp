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


//	auto a = get<1>(t); // t에서 1 번째 요소 얻기
}
/*
template<int N, typename TP>
튜플타입_TP에_보관된_N번째_요소의_타입& get(TP& t)
{
	return static_cast<TP의_N번째_부모타입&>(t).value;
}
*/