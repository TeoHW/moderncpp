// 1. 일반 함수는 자신만의 타입이 없습니다.
//    signature(리턴타입과 파라미터) 가 
//    동일한 모든 함수는 같은 타입입니다.

// 2. 함수객체는 자신만의 타입이 없습니다.
//    signature(리턴타입과 파라미터) 가 
//    동일해도 모든 함수객체는 다른 타입이다.

// 함수 객체 : 자신만의 타입을 가지는 함수!!!

struct Less
{
	inline bool operator()(int a, int b) { return a < b; }
};
struct Greater
{
	inline bool operator()(int a, int b) { return a > b; }
};

//===================================================

// 비교 정책을 교체할수 있는데, 비교 정책의 인라인 치환을 지원하는 Sort
// => C++ STL 라이브러리를 만들때 사용한 설계 기술
// => C++98 부터 지원하는 기술
template<typename T>
void Sort(int* x, int sz, T cmp )
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = i + 1; j < sz; j++)
		{
			if( cmp(x[i], x[j]) == true )	
				std::swap(x[i], x[j]);
		}
	}
}
int main()
{
	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };

	Less    f1; f1(1, 2); Sort(x, 10, f1); // ok f1은 Less
	Greater f2; f2(1, 2); Sort(x, 10, f2); // ??
}