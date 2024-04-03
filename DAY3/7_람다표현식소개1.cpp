#include <vector>
#include <iostream>
#include <algorithm>

// 단항 조건자(unary predicate) 
// => 인자가 한개이고 반환 타입이 bool 또는 bool로 변환가능한 함수
bool foo(int n) { return n % 3 == 0; }

int main()
{
	std::vector<int> v = {1,2,6,4,5,3,7,8,9,10};

	// 주어진 구간에서 3을 찾고 싶다.
	auto ret1 = std::find( v.begin(), v.end(), 3);

	// 주어진 구간에서 3의 배수를 찾고 싶다.
//	auto ret1 = std::find_if( v.begin(), v.end(), 함수);
	auto ret1 = std::find_if( v.begin(), v.end(), foo);


	// 람다 표현식(lambda expression)
	// => 함수 이름(주소)가 필요한 자리에 함수 구현을 직접 표기하는 문법
	// => 익명의 함수를 만드는 문법

	// [] : 람다표현식이 시작됨을 알리는 기호(lambda introducer )

	auto ret2 = std::find_if( v.begin(), v.end(), 
							[](int n) { return n % 3 == 0; } );
}








