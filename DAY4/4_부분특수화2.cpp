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
	~vector() { delete[] buff;}
};
template<>
class vector<bool>
{
	int* buff;
public:
	vector(std::size_t sz)
	{
		buff = new int[(sz/32) + 1]; // 0~31 까지는 4바이트
									 //31~63 까지는 8바이트
	}
	~vector() { delete[] buff;}
};

int main()
{
	vector<int> v1(100);
	vector<bool> v2(100);
}