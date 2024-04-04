#include <iostream>

// C++98 시절에 만든 표준 less
template<typename T = void >
struct less 
{
	inline bool operator()(T a, T b) const 
	{
		return a < b;
	}
};

// C++14에서 추가한 less
template<>
struct less<void>
{
	template<typename T1, typename T2>
	inline bool operator()(T1 a, T2 b) const 
	{
		return a < b;
	}
};

int main()
{
	less<int> f;
	bool ret = f(3, 3.2); // ??

	less<int> f1; // int 끼리만 비교 가능
	less<void> f2; // 서로 다른 타입 비교 가능
	less<> f3; // 위와 동일
	less f4; // 이렇게도 가능

	std::sort(v.begin(), v.end(), std::less{});
}