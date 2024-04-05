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
	// 해결책 : operator[] 를 2개 제공해야 합니다.
	// => 상수 객체인 경우와 상수 객체가 아닌 경우
	
	// 상수 객체가 아닐때는 등호의 왼쪽에 올수 있게 해야 한다.
	// => T& 반환
	T& operator[](int idx)       { return buff[idx];}

	// 상수 객체는 등호의 왼쪽에 올수 없어야 한다.
	// T 반환 : 등호의 왼쪽에 올수 없는것은 만족하지만
	//		    rvalue 반환 입니다. rvalue 는 주소를 구할수 없어서
	//			"&v2[0]" 의 코드가 에러

	// const T& : 등호에 왼쪽에 올수 없지만, lvalue 반환.
	//			"&v2[0]" 이 가능합니다.
//	T operator[](int idx) const { return buff[idx];}
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

	std::cout << &v2[0] << std::endl; // 되야 할까요 ? 안되야 할까요 ?	

/*
	auto p1 = v1.begin();
	auto p2 = v2.begin();

	*p1 = 10; // 되야 합니다.
	*p2 = 10; // 상수 vector 의 반복자 이므로 쓰기 안되야 합니다.

	// 즉, STL begin(), end() 모두 컨테이너가 상수 일때와 아닐때
	// 다른 종류의 반복자 반환.
*/

}
/*
template<typename T>
class vector 
{
public:
	쓰기가_가능한_iterator   begin()        { ... };
	쓰기가_불가능한_iterator begin() const  { ... };
};
*/
