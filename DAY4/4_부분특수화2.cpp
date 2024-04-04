#include <iostream>

// vector 를 생각해 봅시다.
template<typename T>
class vector
{
	T* buff;
public:
	vector(std::size_t sz)
	{
		buff = new T[sz];
	}
};

int main()
{
	vector<int> v1(100);
	vector<bool> v2(100);
}