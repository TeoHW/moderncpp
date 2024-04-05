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

	// [] 연산자 재정의 : 객체를 배열 처럼 사용가능하게 한다.
	T& operator[](int idx) { return buff[idx];}
};

int main()
{
	vector<int> v1(10, 3);

	std::cout << v1[0] << std::endl;
			  // v1.operator[](0)

	v[0] = 10;
}