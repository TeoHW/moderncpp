#include <vector>
#include <iostream>
#include <algorithm>

bool foo(int n) { return n%3 == 0; }

int main()
{
	std::vector<int> v = {1,2,6,4,5,3,7,8,9,10};

    int k = 3; // 사용자가 입력한 값이라고 가정
    // 주어진 구간에서 k의 배수를 찾고 싶다

	auto ret2 = std::find_if( v.begin(), v.end(), foo);
	// 람다표현식 (lambda expression)
    // 람다표현식은 지역변수를 캡처할 수 있는 능력이 있다.
	auto ret3 = std::find_if( v.begin(), v.end(), [k](int n){return n%k == 0;});


}