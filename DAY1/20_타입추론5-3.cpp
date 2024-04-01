#include <iostream>
/*
template<typename T>
void foo(T arr)
{
	auto sz = std::size(arr); // error. arr는 현재 배열 아닙니다. 포인터!
	std::cout << sz << std::endl;
}
*/
template<typename T>
void foo(T& arr)
{
	auto sz = std::size(arr); 
	std::cout << sz << std::endl;
}

int main()
{
	int x[3] = {1,2,3};

	// C++ 에서는 배열의 크기를 구하는 함수가 있습니다.
	auto sz = std::size(x); // 3

	foo(x);
}

int main()
{


	// 배열의 이름은 "배열의 시작 주소이다" => 절대 아닙니다.!!!
	// 배열의 이름은 "배열의 1번째 요소의 주소이다" => ok!!

	int n = 0;
	int *p = &n;

	int x[3] = {1,2,3};
	int (*p1)[3] = &x; // 배열의 주소

	int* p2 = x;

	int y[3][2] = {{1,2},{3,4}{5,6}}

	int (*p3)[2][3]  = &y;
		
	int (*p4)[2] = y;


}