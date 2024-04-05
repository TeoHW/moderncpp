#include <iostream>


// operator() 함수는 상수 멤버 함수로 하는 것이 관례임
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
	bool b = f(1, 2);
}

int main()
{
	less<int> cmp;

	sort(cmp);
}
