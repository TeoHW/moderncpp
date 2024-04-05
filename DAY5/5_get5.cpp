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
튜플타입_TP에_보관된_N번째_요소의_타입& get(TP& t)
{
	return static_cast<TP의_N번째_부모타입&>(t).value;
}


int main()
{
	tuple<int, double, short> t(1, 3.4, 2);

	foo(t);
}
