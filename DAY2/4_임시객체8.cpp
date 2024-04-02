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

//	v[0] = 10;  // 이코드가 되어야 하므로. v[0] 의 반환 타입은 참조 입니다.
			    // T& operator[](int idx)

	// 아래 코드는 3번째 인자로 "1" 을 전달하는 것이 아니라
	// => v 의 1번째 요소를 가리키는 참조를 전달한것
//	auto ret = std::remove(v.begin(), v.end(), v[0] );

//	int value = v[0];
//	auto ret = std::remove(v.begin(), v.end(), value );

	// static_cast<Type>(변수) => 변수가 가진 "값"을 rvalue로 캐스팅
	//							                  (literal 을 생성해달라)
//	auto ret = std::remove(v.begin(), v.end(), static_cast<int>(v[0])  );

	auto ret = std::remove(v.begin(), v.end(), auto{v[0]}  );
											// 위 캐스팅과 동일.

	// 출력
	v.erase(ret, v.end());
	for( auto e : v )
		std::cout << e << ", ";
}
