#include <complex>

int main()
{
	int a1 = 10;
	int b1(10); 
	int x1[2] = { 1,2 };
	std::complex<double> c1(1, 2);

	// 중괄호 초기화 기법
	// uniform initialization 문법
	int a2 = {10};
	int b2 = {10}; 
	int x2[2] = { 1,2 };
	std::complex<double> c2 = {1, 2};

	//  = 없어도 됩니다. 
	// =이 있으면 복사초기화, 없으면 직접 초기화(direct initialization)
	int a2{10};
	int b2{10}; 
	int x2[2]{ 1,2 };
	std::complex<double> c2{1, 2};

}












