// 5_람다표현식1
#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>

inline bool cmp1(int a, int b) { return a < b; }

int main()
{
	std::vector<int> v = { 1,3,5,7,9,2,4,6,8,10 };
	
	// sort 하고 싶다면 ( STL 컨테이너, 배열 모두 가능)

	// #1. 비교정책을 전달하지 않으면 - 오름 차순
	std::sort( v.begin(), v.end() ); 

	// #2. 비교정책으로 일반 함수 전달 - cmp1 인라인 치환 안됨. 느림.
	std::sort( v.begin(), v.end(), cmp1 ); 


	// #3. 비교정책으로 함수 객체 사용 - 인라인 치환됨.
	std::less<int> f;	// C++98 부터 지원
	std::sort( v.begin(), v.end(), f ); 
	std::sort( v.begin(), v.end(),  std::less<int>{} );  // 임시객체 형태로
	std::sort( v.begin(), v.end(),  std::less{} );  // C++17 부터 가능
	std::sort( v.begin(), v.end(),  std::greater{} );  // 오름차순

	// #4. 비교정책으로 람다 표현식 사용 - C++11 부터 가능, 인라인 치환 가능
	std::sort( v.begin(), v.end(), [](int a, int b) { return a > b;} );
										// 오름 차순. 

}




