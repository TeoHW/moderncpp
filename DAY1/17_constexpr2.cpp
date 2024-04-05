#include <array>
#include <iostream>


// constexpr 함수
// 1. 인자의 값이 컴파일 시 미리 알 수 있다면 컴파일 시 해당 함수를 미리 실행해서 결과값을 얻어 컴파일함

constexpr int Factorial(int n)
{
	return n == 1 ? 1 : n * Factorial(n - 1);
}

int main()
{
	int n = 5;
	std::array<int, Factorial(5)> a1 = {0};

	
	int s = Factorial(5);

	int arr1[Factorial(5)]; 

	int arr2[Factorial(n)] = {0}; 
						
	int s2 = Factorial(n); 

	for(auto e : arr2){
		std::cout << e << std::endl;
	}
}
