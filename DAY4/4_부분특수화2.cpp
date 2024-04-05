#include <iostream>

template<typename T>
class vector
{
	T* buff;
public:
	vector(std::size_t sz){
		buff = new T[sz];
	}
	~vector(){delete[] buff;}
};

template<>
class vector<bool>
{
	int* buff;
public:
	vector(std::size_t sz){
		buff = new int[sz/32 + 1];
	}
	~vector(){delete[] buff;}
};


int main()
{
	vector<int> v1(100);
	vector<bool> v2(100);
}