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
}



