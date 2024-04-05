#include <iostream>
#include <memory>

template<typename T>
class vector 
{
	T* buff;
	std::size_t size;
public:
	vector(std::size_t sz, T value ) : size(sz)
	{
		buff = new T[sz];
		std::uninitialized_fill_n(buff, sz, value);
	}
	~vector() { delete[] buff;}

	//---------------------------------------------------------
	T& operator[](int idx) { return buff[idx];}
};

int main()
{
	      vector<int> v1(10, 3);
	const vector<int> v2(10, 3); // 상수 배열 처럼 동작해야 합니다.

	int n = 0;

	// 아래 코드를 보고 "되야하는것(O)과 안되야 하는것(X)"을 구별해 보세요
	// #1. operator[] 가 상수 멤버 함수가 아닌 경우
	//			// 원하는것 		현재 상태
	n = v1[0];	// O				O
	n = v2[0];  // O				X
	v1[0] = 0;  // O				O
	v2[0] = 0;  // X				X

}


