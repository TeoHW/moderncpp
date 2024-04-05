#include <iostream>

template<typename T>void foo(T a,  T b){
	std::cout << "foo" << __PRETTY_FUNCTION__ << std::endl;
}
template<typename T>void goo(T& a, T& b){
	std::cout << "goo" << __PRETTY_FUNCTION__ << std::endl;
}

int main(){

	foo("apple", "banana");	// T는 모두 포인터 형식으로 const char* 동일함
	goo("apple", "banana");
	// apple와 banana는 각각 const char[6], const char[7]로 서로 다른 배열 크기를 가지고 있다
	// 참조로 받는 경우 const char[6],const char[7]로 서로 다르기 때문에 에러 발생 
}