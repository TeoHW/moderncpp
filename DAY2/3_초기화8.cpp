// 1_초기화8 - 62page
#include <iostream>
#include <initializer_list> // 핵심

void foo(std::initializer_list<int> e)
{
	// 사용법은 STL 과 동일
	auto first = e.begin();
	auto last = e.end();

//	*first = 0; // error. 읽기만 가능

	for( auto n : e) // ok..
	{

	}
}
int main()
{
	// 아래 코드는
	// 1. {1,2,3,4,5} 를 배열과 동일(연속된메모리)하게 메모리에 할당
	// 2. 객체 e 는 "시작 주소와 갯수" 또는 "시작 주소와 마지막 다음주소" 로관리
	std::initializer_list<int> e = { 1,2,3,4,5 };

	// 1. raw array 를 사용하면 안되나요 ?
	// => std::initializer_list<int> 를 사용해서 새로운 문법을 만들기 위해 도입

	// 2. vector 를 사용하면 안되나요
	// => vector 는 모든 데이타가 힙에.

	// 함수 인자 std::initializer_list<int> 라면 아래 처럼 전달하면 됩니다.
	foo(e);
	foo({1,2,3});
	foo({1,2,3, 4, 5});
}


