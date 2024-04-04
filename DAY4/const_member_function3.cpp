#include <iostream>

// 멤버 함수에서 멤버 데이타를 수정하지 않는다면
// => "반드시 상수 멤버 함수로 해야 합니다"

// 함수 객체 만들때도, operator() 함수는 상수 멤버 함수로 하는 것이 관례

template<typename T>
struct less
{
	inline bool operator()(T a, T b) const 
	{
		return a < b;
	}
};

template<typename T>
void sort(const T& f)
{
	bool b = f(1, 2); 	// f.operator()(1,2) 의 의미 인데.
						// f 가 상수 객체이므로
						// operator() 는 반드시 상수 함수이어야만 호출가능하다
}

int main()
{
	less<int> cmp;

	sort(cmp);
}
