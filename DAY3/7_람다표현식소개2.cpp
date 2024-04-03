#include <vector>
#include <iostream>
#include <algorithm>

// 단항 조건자(unary predicate) 
// => 인자가 한개이고 반환 타입이 bool 또는 bool로 변환가능한 함수
bool foo(int n) { return n % 3 == 0; }

int main()
{
	std::vector<int> v = {1,2,6,4,5,3,7,8,9,10};

	int k = 3; // 사용자가 입력한 값이라고 가정

	// 주어진 구간에서 k의 배수를 찾고 싶다 ???!

	auto ret1 = std::find_if( v.begin(), v.end(), foo);

	auto ret2 = std::find_if( v.begin(), v.end(), 
							[](int n) { return n % 3 == 0; } );
}








