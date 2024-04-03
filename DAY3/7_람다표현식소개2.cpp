#include <vector>
#include <iostream>
#include <algorithm>

bool foo(int n) { return n % 3 == 0; }

int main()
{
	std::vector<int> v = {1,2,6,4,5,3,7,8,9,10};

	int k = 3; // 사용자가 입력한 값이라고 가정

	// 주어진 구간에서 k의 배수를 찾고 싶다 ???!
	// => 일반 함수인 foo 안에서는 지역변수 k에 접근할수 없습니다.!!
	// => 일반 함수로는 이문제 해결안됩니다(전역변수등을 사용해야만 합니다.)
//	auto ret1 = std::find_if( v.begin(), v.end(), foo);


	// 람다표현식은 지역변수를 캡쳐 할수 있는 능력이 있습니다.
	auto ret2 = std::find_if( v.begin(), v.end(), 
							[k](int n) { return n % k == 0; } );
							// "단항함수 + 지역변수 k" 를 인자로 보내는 의미
}
// 람다 표현식 장점 1. 지역변수 캡쳐







