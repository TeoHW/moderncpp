#include <complex>

int main()
{
	// C++98 : 변수에 따라 초기화 방법이 다르다.
	int a1 = 10;
	int b1(10); 
	int x1[2] = { 1,2 };
	std::complex<double> c1(1, 2);

	// 일관된 초기화(uniform initialization) 문법
	// => 중괄호 초기화(brace init) 이라고도 합니다.
	int a2 = {10};
	int x2[2] = { 1,2 };
	std::complex<double> c2 = {1, 2};	

	// = 없어도 됩니다.
	int a3{10};
	int x3[2]{ 1,2 };
	std::complex<double> c3{1, 2};		

	// direct(직접) initialization : = 이 없는 초기화
	// copy(복사)   initialization : = 이 있는 초기화
}












