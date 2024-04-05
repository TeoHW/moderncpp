// 1_초기화8 - 62page
#include <iostream>
#include <initializer_list> // 핵심

void foo(std::initializer_list<int> e)
{
	auto first = e.begin();
	auto last = e.end();

	// *first = 0; // error. 읽기만 가능
	for(auto n : e){
		// 가능해짐
	}
}
int main()
{
	// 아래 코드는
	// 1. {1, 2, 3, 4, 5}를 배열과 동일하게 메모리에 할당 (연속된 메모리)
	// 2. 객체 e는 "시작 주소와 갯수" 또는 "시작 주소와 마지막 다음주소"로 관리
	std::initializer_list<int> e = { 1,2,3,4,5 };

	// 1. raw array를 사용하면 안되나요?
	// => std::initializer_list<int>를 사용하서 새로운 문법을 만들기 위해 도입

	// 2. vector 를 사용하면 안되나요?
	// => vector는 모든 데이터가 heap에 위치. 그러나 위 코드는 stack에 위치함


}


