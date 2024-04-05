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
	// C++23 이 나오기 전에는 아래 처럼 2개를 만들어야 합니다.
	// => 그런데, 구현이 동일합니다.
	T& operator[](int idx)       { return buff[idx];}
	const T& operator[](int idx) const { return buff[idx];}
};

int main()
{
	      vector<int> v1(10, 3);
	const vector<int> v2(10, 3); 
	int n = 0;

	n = v1[0];	// O				
	n = v2[0];  // O				
	v1[0] = 0;  // O				
	v2[0] = 0;  // X			

	std::cout << &v2[0] << std::endl; 


}

