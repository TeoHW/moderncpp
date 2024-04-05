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

//	tuple<int, double, short> t3; // 이 튜플의 1번째 타입(double) 은
//	tuple<     double, short> t2; // 이 튜플의 0번째 타입 과 같습니다.
