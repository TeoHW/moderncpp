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
//----------------------------------------------------------

template<int N, typename TP>
struct tuple_element;

// N == 0 은 해결
template<typename T, typename ... Ts >
struct tuple_element<0, tuple<T, Ts...>>
{
	using type = T;
	using tupleType = tuple<T, Ts...>;
};

// N != 0 
template<int N, typename T, typename ... Ts >
struct tuple_element<N, tuple<T, Ts...>>
{
	using type = typename tuple_element<N-1, tuple<Ts...>>::type;
	using tupleType = typename tuple_element<N-1, tuple<Ts...>>::tupleType;
};



template<int N, typename TP>
typename tuple_element<N, TP>::type& get(TP& t)
{
	return static_cast<typename tuple_element<N, TP>::tupleType&>(t).value;
}


int main()
{
	tuple<int, double, short> t(1, 3.4, 2);

	auto a = get<1>(t); // 결국 "t.second_member_name" 같이
					    // 구조체의 필드를 이름으로 접근하는 것과 
						// 완전히 동일한 기계어 코드가 됩니다.
	get<0>(t) = 20;

	std::cout << get<0>(t) << std::endl;
}
