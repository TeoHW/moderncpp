#include <iostream>
#include <vector>
#include <algorithm>

// 함수객체의 장점 2. Closure

bool foo(int n) { return n % 3 == 0; }


class IsDivide 
{
	int value;
public:
	IsDivide(int n) : value{n} {}
	bool operator()(int n) { return n % value == 0;}
};

int main()
{
	std::vector<int> v = { 1,2,6,5,4,3,7,8 };

	int k = 3;
	// 주어진 구간에서 "k의 배수"를 찾고 싶다. 
	//auto p1 = std::find_if(v.begin(), v.end(), foo);

	IsDivide f(k); 	// 1. f는 k 값을 보관(캡쳐) 합니다
					// 2. f는 인자가 한개인 함수 처럼 사용 가능합니다.
	bool b = f(10); // 10 % k == 0 의 의미

	auto p1 = std::find_if(v.begin(), v.end(), f); 

	// 함수객체는 함수 인자로 한번만 사용하면 "임시객체" 로 보내는 것이 효율적입니다.
	auto p2 = std::find_if(v.begin(), v.end(), IsDivide{k} ); 
}

// 자신이 속한 문맥(함수)의 지역변수를 캡쳐해서 다른 함수에 전달될수 있는 
// 능력이 있는 함수
// => 클로져(Closure)라고 부릅니다
// => 일반함수 : 클로져가 될수 없습니다.
// => 함수객체 : 클로져가 될수 있습니다.



