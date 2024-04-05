#include <iostream>
#include <vector>
#include <algorithm>

// 함수객체의 장점 1. Closure

bool foo(int n) { return n % 3 == 0; }

class IsDivide{
	int value;
public:
	IsDivide(int n) : value{n}{}
	bool operator()(int n){return n % value == 0;}
};


int main()
{
	std::vector<int> v = { 1,2,6,5,4,3,7,8 };
	
	int k = 3;
	// IsDivide f(k);

	// // 주어진 구간에서 "k의 배수"를 찾고 싶다. 
	// auto p1 = std::find_if(v.begin(), v.end(), f);

	auto p1 = std::find_if(v.begin(), v.end(), IsDivide{k});	// 함수 객체(임시객체)로 전달

}

// 자신이 속한 문맥(함수)의 지역변수를 캡쳐해서 다른 함수에 전달될 수 있는 능력이 있는 함수
// 클로저(closure)라고 부릅니다
// 일반 함수 : 클로져가 될 수 없음
// 함수 객체 : 가능



