#include <vector>
#include <algorithm>
#include <iostream>

/*
template<typename IT, typename T>
IT remove(IT first, IT last, const T& value)
{
	//....
}
*/

int main()
{
	std::vector<int> v = {1,2,3,1,2,3,1,2,3};

	// #1. v[0] 또는 v.front() 로 vector의 1번째 요소(index 0)에 접근할수 있습니다.
	std::cout << v[0] << std::endl;

	// #2. std::remove() 알고리즘을 사용하면 구간에서 특정 값을 가지는 요소를 제거할수 있습니다.
	// => 아래 코드는 v 전체 구간에서 3을 제거하는 코드 입니다.
	// auto ret = std::remove(v.begin(), v.end(), 3 );
	
	// 아래 코드는 벡터의 첫번째 요소 참조를 보내는 것이라 이후 코드에서 문제가 발생한다.
	// auto ret = std::remove(v.begin(), v.end(), (v[0]) );
	// 값으로 넘겨줘야 사용자가 의도한 첫번째 값과 동일한 값을 지울 수 있다.
	// auto ret = std::remove(v.begin(), v.end(), static_cast<int>(v[0]) );
	auto ret = std::remove(v.begin(), v.end(), auto{v[0]} );

	// 출력
	v.erase(ret, v.end());
	for( auto e : v )
		std::cout << e << ", ";
}

// 실행해서 결과를 확인하면 "1,2,1,2,1,2" 가 나오게 됩니다.

// 코드가 이해 되신 분은
// #2 한줄을 주석으로 막고
// "3" 이 아니라 vector v 가 가진 1번째 요소(index 0) 를 제거하는 코드로 변경해 보세요