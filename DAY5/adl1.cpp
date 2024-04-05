// adl1.cpp
// 1. using namespace std 는 조심하세요!!
// 2. 아래 같이 이름 충돌이 많이 발생
#include <iostream>
//using namespace std;

int count = 0;

int main()
{
	int n = count; // 왜 컴파일 에러일까요 ?
				   // C++ 표준에 "std::count()" 라는 함수가 있습니다.
				   // using namespace std 때문에
				   // std 안의 요소를 자동검색하게 되어서 이름 충돌 
}