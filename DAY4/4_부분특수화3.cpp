#include <iostream>

// C++98 시절에 만든 표준 less
template<typename T>
struct less 
{
	inline bool operator()(T a, T b) const 
	{
		return a < b;
	}
};

int main()
{
	less<int> f;
	auto f = f(3, 3.2);
}