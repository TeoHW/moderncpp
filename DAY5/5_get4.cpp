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



// tuple_element<N, TP>::type
// => TP 타입의 N 번째 요소의 타입

/*
template<int N, typename TP>
struct tuple_element
{
	using type = TP의 N번째 요소의 타입;
				// primary 버전에서는 알수 없다.
				// 알아낼수 있도록 부분 특수화 해야 한다.
};
*/
// 결국 tuple_element 는 아래 2개의 부분 특수화 버전만 사용하게 됩니다.
// 이런 경우는 primary template 은 선언만 해도 됩니다.
template<int N, typename TP>
struct tuple_element;


// 잘못된(N번째를 구할수 없는) 부분 특수화 #1
/*
template<typename TP>
struct tuple_element<0, TP>
{
	using type = TP의 N번째 요소의 타입 을 구할수 없습니다
};
*/

/*
// 잘못된(N번째를 구할수 없는) 부분 특수화 #2
template<typename ... Ts >
struct tuple_element<0, tuple<Ts...>>
{
	using type = TP의 N번째 요소의 타입 을 구할수 없습니다
};
*/

// N == 0 은 해결
template<typename T, typename ... Ts >
struct tuple_element<0, tuple<T, Ts...>>
{
	// tuple<T, Ts...> 에서
	// 0번째 요소의 타입은 : T
	// 0번째 요소를 보관하는 타입은 : tuple<T, Ts...>
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





template<typename TP>
void foo(TP& t)
{
	// TP : tuple<int, double, short>
	typename tuple_element<1, TP>::type n; // double n

	std::cout << typeid(n).name() << std::endl; // double
}

int main()
{
	tuple<int, double, short> t(1, 3.4, 2);

	foo(t);
}

//	tuple<int, double, short> t3; // 이 튜플의 1번째(N) 타입(double) 은
//	tuple<     double, short> t2; // 이 튜플의 0번째(N-1) 타입 과 같습니다.
