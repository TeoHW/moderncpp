// 8_tuple1 - 245 page
#include <tuple>

int main()
{
	// 배열과 STL 컨테이너 : 동일 타입을 여러개 보관
//	int x[10];
//	std::vector<int> v(10);


	// 다른 타입 여러개를 보관하려면 pair 또는 tuple 사용

	// pair : 서로 다른 타입 2개를 보관 - C++98
	std::pair<int, double> p(1, 2.3);

	auto a1 = p.frist;  // 1
	auto a2 = p.second; // 2.3

	std::pair<int, std::pair<double, char> > p2(1, {3.4, 'A'});

	auto a3 = p2.second.first; // 3.4

	// C++11 부터 tuple 제공
	std::tuple<int, double, char> t1(1, 3.4, 'A');
	std::tuple t2(1, 3.4, 'A'); // C++17 부터 가능.

	std::get<0>(t1) = 10;

	std::cout << std::get<1>(t1) << std::endl;  // 3.4
}

std::tuple<int, double, char> foo()
{
	return std::tuple{1, 3.4, 'A'};
}